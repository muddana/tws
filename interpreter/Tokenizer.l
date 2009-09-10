%{
#include <stdio.h>
#include <string.h>
#include "y.tab.h"

static int line = 1;
static int column = 1;

%}

IDENT	[a-zA-Z][_a-zA-Z0-9]*
WHITE   [ \t\v\f]*

%%

{WHITE}    { column += yyleng; }
\n         { column = 1; line++; }
{IDENT}    { return ID; }

%%
