%term FOR IN WHILE IF NOT TWIDDLE BANG SUBSHELL SWITCH FN
%term WORD REDIR DUP PIPE SUB ANDAND OROR
%term SIMPLE ARGLIST WORDS BRACE PAREN PCMD PIPEFD /* not used in syntax */
/* operator priorities -- lowest first */
%left IF WHILE FOR SWITCH ')' NOT
%left ANDAND OROR
%left BANG SUBSHELL
%left PIPE
%left '^'
%right '$' COUNT '"'
%left SUB
%{
#include "rc.h"
#include "fns.h"
%}
%union{
	struct tree *tree;
};
%type<tree> line paren parnl brace body assign epilog redir
%type<tree> cmd cmdexpr simple compound
%type<tree> first kword kword_t word_t comword keyword word words
%type<tree> NOT FOR IN WHILE IF TWIDDLE BANG SUBSHELL SWITCH FN
%type<tree> WORD REDIR DUP PIPE
%%
rc:				{ return 1;}
|	line '\n'		{return !compile(reassoc($1));}
line:	cmdexpr
|	line ';' cmdexpr	{$$=tree2(';', $1, $3);}
	/* We have to apply this '&' to the right-most child of a
	 * compound expression (';').  If 'line' is not ';'
	 * there are some special cases (including { & } which we ignore).
	 */
|	line '&' cmdexpr	{$$=!(struct tree *)$1?$3:($1->type!=';'?tree2(';', tree1('&', $1), $3):tree2(';', mung2($1,$1->child[1],tree1('&',$1->child[2])), $3) );}
|				{$$=(struct tree *)0;}
body:	line			{$$=reassoc($1);}
|	body '\n' line		{$$=tree2(';', $1, reassoc($3));}
brace:	'{' body '}'		{$$=tree1(BRACE, reassoc($2));}
paren:	'(' body ')'		{$$=tree1(PCMD, reassoc($2));}
epilog:				{$$=0;}
|	redir epilog		{$$=mung2($1, $1->child[0], $2);}
redir:	REDIR word		{$$=mung1($1, $1->rtype==HERE?heredoc($2):$2);}
|	DUP
parnl:	paren {skipnl();}	{$$=$1;}
cmdexpr: cmd
|	cmdexpr ANDAND cmd	{$$=tree2(ANDAND, $1, $3);}
|	cmdexpr OROR cmd	{$$=tree2(OROR, $1, $3);}
|	cmdexpr PIPE cmd	{$$=mung2($2, $1, $3);}
cmd:    simple			{$$=simplemung($1);}
|	IF parnl cmdexpr	{$$=mung2($1, $2, $3);}
|	IF NOT {skipnl();} cmdexpr
				{$$=mung1($2, $4);}
|	IF parnl brace IF NOT {skipnl();} cmdexpr
				{$$=tree2(';',mung2($1, $2, $3),mung1($5, $7));}
|	FOR '(' word IN words ')' {skipnl();} cmdexpr
	/*
	 * if ``words'' is nil, we need a tree element to distinguish between 
	 * for(i in ) and for(i), the former being a loop over the empty set
	 * and the latter being the implicit argument loop.  so if $5 is nil
	 * (the empty set), we represent it as "()".  don't parenthesize non-nil
	 * functions, to avoid growing parentheses every time we reread the
	 * definition.
	 */
				{$$=mung3($1, $3, $5 ? $5 : tree1(PAREN, $5), $8);}
|	FOR '(' word ')' {skipnl();} cmdexpr
				{$$=mung3($1, $3, (struct tree *)0, $6);}
|	WHILE parnl cmdexpr
				{$$=mung2($1, $2, $3);}
|	BANG cmdexpr		{$$=mung1($1, $2);}
|	SUBSHELL cmdexpr	{$$=mung1($1, $2);}
|	redir cmd  		{$$=mung2($1, $1->child[0], $2);}
|       assign     		{$$=mung3($1, $1->child[0], $1->child[1], (struct tree *)0);}
|       assign cmd 		{$$=mung3($1, $1->child[0], $1->child[1], $2);}
|	SWITCH kword {skipnl();} brace
 				{$$=tree2(SWITCH, $2, $4);}
|	TWIDDLE word words	{$$=mung2($1, $2, $3);}
|	FN words brace		{$$=tree2(FN, $2, $3);}
|	FN words		{$$=tree1(FN, $2);}
|	brace epilog		{$$=epimung($1, $2, 1);}
simple:	first
|	compound
|	first redir		{$$=tree2(ARGLIST, $1, $2);}
compound: first kword		{$$=tree2(ARGLIST, $1, $2);}
|         compound word         {$$=tree2(ARGLIST, $1, $2);}
|	  compound redir	{$$=tree2(ARGLIST, $1, $2);}
assign:	first '=' kword		{$$=tree2('=', $1, $3);}
|	first '^' '=' kword	{$$=tree2('=', $1, $4);}
	/* first words are the most restricted word class */
first:	comword
|  	WORD
	/*comword |	first '^' kword		{$$=tree2('^', $1, $3);}*/
	/* word_t can be any keyword and '=' signs */
word_t:	kword_t
| 	'='			{lastword=1; $$=token("=", WORD);}
	/* word = word_t strung together by carats */
word:	word_t
|	word '^' word_t		{$$=tree2('^', $1, $3);}
words:				{$$=(struct tree*)0;}
|	words word		{$$=tree2(WORDS, $1, $2);}
	/* kword_t can be any first word, keyword, or list of words */
kword_t:first
|       keyword		{lastword=1; $1->type=WORD;}
|	'(' words ')'		{$$=tree1(PAREN, $2);}
	/* kword = kword_t strung together by carats */
kword:	kword_t
|	kword '^' kword_t	{$$=tree2('^', $1, $3);}
	/* words that get interpreted */
comword: '$' kword		{$$=tree1('$', $2);}
|	'$' kword SUB words ')'	{$$=tree2(SUB, $2, $4);}
|	'"' kword		{$$=tree1('"', $2);}
|	COUNT kword		{$$=tree1(COUNT, $2);}
|	'`' brace		{$$=tree1('`', $2);}
|	REDIR brace		{$$=mung1($1, $2); $$->type=PIPEFD;}
keyword: FOR|IN|WHILE|IF|NOT|TWIDDLE|BANG|SUBSHELL|SWITCH|FN
