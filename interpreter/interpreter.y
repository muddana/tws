%{

#include <stdio.h>
#include <header/CommandLine.h>
#include <header/Table.h>
#include <header/Text.h>
#include <header/Error.h>
#include <header/String_Input.h>
#include <header/Code.h>
#include <header/Machine.h>

#define Stack int

extern int yylineno;
extern int yychar;

/*extern Stack Labels, Ops, Operand1, Operand2;*/

void yyerror(char *msg) {
   fprintf(stderr, "%s: %c\nat line %d\n", msg, yychar, yylineno);
}  

%}

%union {
  struct { char *id; int leng; } string;
}

%start codeFile

%token <string> ID LABEL
%token NL WHITE

%%

codeFile: codeFile lines 
        | lines
        ;

lines: LABEL ID ID ID NL 
       { 
	 Get(Labels,$1.id,$1.leng); 
	 Get(Ops,$2.id,$2.leng);
	 Get(Operand1,$3.id,$3.leng);
	 Get(Operand2,$4.id,$4.leng);
       }
     | LABEL ID ID NL
       { 
	 Get(Labels,$1.id,$1.leng);
	 Get(Ops,$2.id,$2.leng);
	 Get(Operand1,$3.id,$3.leng);
	 Get(Operand2,"",0);
       }   
     | LABEL ID NL
       { 
	 Get(Labels,$1.id,$1.leng);
	 Get(Ops,$2.id,$2.leng);
	 Get(Operand1,"",0);
	 Get(Operand2,"",0);
       }
     | ID ID ID NL
       { 
	 Get(Labels,"",0);
	 Get(Ops,$1.id,$1.leng);
	 Get(Operand1,$2.id,$2.leng);
	 Get(Operand2,$3.id,$3.leng);
       }  
     | ID ID NL
       { 
	 Get(Labels,"",0);
	 Get(Ops,$1.id,$1.leng);
	 Get(Operand1,$2.id,$2.leng);
	 Get(Operand2,"",0);
       }  
     | ID NL
       {
	 Get(Labels,"",0);
	 Get(Ops,$1.id,$1.leng);
	 Get(Operand1,"",0);
	 Get(Operand2,"",0);
       }  
     | NL
     ;
%%

setyyin(char *in)
{ 
  extern FILE *yyin;
  yyin = fopen(in, "r");
}

closeyyin()
{
  extern FILE *yyin;
  fclose(yyin);
}

