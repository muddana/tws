#include "Trees.h"

/* Union the token info and the tree node together so */
/* all the information we could need is here. */

typedef struct {
    int line;
    int column;
    int token;
    char *string;
} TOKEN_INFO;  


/* Define the external functions of yacc that we want to use. */
/*extern int yylex();
extern void print_yylval();*/
