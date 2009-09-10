%{
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "Tokenizer.h"
#include "y.tab.h"

static int line = 1;
static int column = 1;

void rule(int token);
void copy_yytext(void);
void yyerror(char* message);

int debug_tokenizer = 0;

%}

IDENT	[_a-zA-Z][_a-zA-Z0-9]*
WHITE   [ \t\v\f]*
LIT     '[^\']+'
STR     \"[^\"]+\"

%%

{WHITE}    { column += yyleng; }
\n         { column = 1; line++; }
"%%"       { rule(MARK); return MARK; }
"%node"    { rule(NODE); return NODE; }
"->"       { rule(OR); return OR; }
"list"     { rule(LIST); return LIST; }
"=>"       { rule(ACTION); return ACTION; }
"|"        { rule(PIPE); return PIPE; }
"*"        { rule(STAR); return STAR; }
"+"        { rule(PLUS); return PLUS; }
"?"        { rule(QUESTION); return QUESTION; }
{IDENT}    { rule(IDENTIFIER); return IDENTIFIER; }
{LIT}      { rule(LITERAL); return LITERAL; }
{STR}      { rule(STRING); return STRING; }
.          { rule(LIT); return yytext[0]; }

%%

void rule(int token)
{
    if (debug_tokenizer) {
	printf("string:%s, token: %d, line: %d, column: %d\n",
	       yytext,token,line,column);
    }

    yylval.info.string = 0;
    yylval.info.line = line;
    yylval.info.column = column;
    yylval.info.token  = token;
    column += yyleng;

    copy_yytext();
}

void copy_yytext(void)
{
    yylval.info.string = malloc(yyleng+1);
    assert(yylval.info.string);
    strcpy(yylval.info.string, yytext); 
}

void yyerror(char* message)
{
    printf("****** %s @line %d, column %d\n",
	   message,line,column);
}

void print_yylval()
{
    switch (yylval.info.token) {
    case MARK:
	printf("token: %s, string: %s, line: %d, column: %d\n",
	       "MARK", "%%", yylval.info.line, yylval.info.column);
	break;
    case NODE:
	printf("token: %s, string: %s, line: %d, column: %d\n",
	       "NODE", "%token", yylval.info.line, yylval.info.column);
	break;
    case OR:
	printf("token: %s, string: %s, line: %d, column: %d\n",
	       "OR", "->", yylval.info.line, yylval.info.column);
	break;
    case LIST:
	printf("token: %s, string: %s, line: %d, column: %d\n",
	       "LIST", "list", yylval.info.line, yylval.info.column);
	break;
    case ACTION:
	printf("token: %s, string: %s, line: %d, column: %d\n",
	       "ACTION", "=>", yylval.info.line, yylval.info.column);
	break;
    case IDENTIFIER:
	printf("token: %s, string: %s, line: %d, column: %d\n",
	       "IDENTIFIER",
	       yylval.info.string, yylval.info.line, yylval.info.column);
	break;
    case LITERAL:
	printf("token: %s, string: %s, line: %d, column: %d\n",
	       "LITERAL",
	       yylval.info.string, yylval.info.line, yylval.info.column);
	break;
    case LIT:
	printf("token: %s, string: %s, line: %d, column: %d\n",
	       "LIT",
	       yylval.info.string, yylval.info.line, yylval.info.column);
	break;
    case STRING:
	printf("token: %s, string: %s, line: %d, column: %d\n",
	       "STRING",
	       yylval.info.string, yylval.info.line, yylval.info.column);
    }

}
