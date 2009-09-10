%{ 
#include "y.tab.h"
#include <string.h>

int column = 1;
%}

%option yylineno 

IDENT [a-zA-Z0-9][a-zA-Z0-9]*
DELIM [ \t\f\v\b]

%x comment linecomment
%%

"/*"         		{ BEGIN(comment); }
<comment>[^*\n]*       	/* eat it up */
<comment>"*"+[^*/\n]*  	/* eat it up */
<comment>\n       	{ column = 1; }
<comment>"*"+"/"        { BEGIN(INITIAL); }

"#"			BEGIN(linecomment);
<linecomment>\n		{ column = 1; BEGIN(INITIAL); return NL; }
<linecomment>.		/* eat it up */



{IDENT} { 
	 yylval.string.id = (char*)strdup(yytext);
	 yylval.string.leng = yyleng; 
	 column += yyleng; 
	 return (column - yyleng == 1) ? LABEL : ID;
	}
\n { column = 1; return NL; }
{DELIM} { column += yyleng; }

%%

int yywrap() { return 1; }
