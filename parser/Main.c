/* Emacs: -*- C -*- */
/* $Id: */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "GenericTrees.h"
#include "Tokenizer.h"
#include "Trees.h"

TREENODE *root;

main(void)
{
#if 1
   FILE *f;
    
   if (yyparse() == 0) 
   {
      /* PrintRawTree(stdout,root); */
      f = fopen("_TREE","w");
      if (f == NULL) 
      {
         printf("cannot open _TREE\n");
         exit(10);
      }
        
      DumpManuelTree(f,root);
   }
    
   else
      printf("*** Parse Error\n"); 
#endif

#if 0
   extern int yylex(void);

   while (yylex())
      printf("%s (L%d/C%d)\n",yylval.info.string,yylval.info.line,yylval.info.column);
#endif

   exit(0);
}
