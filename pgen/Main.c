/* Standard Includes */
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "GenericTrees.h"
#include "Tokenizer.h"
#include "Trees.h"
#include "SymbolTable.h"

/* Define the root of the tree */
TREENODE *root;
NAME *terminals[TBLSZ];
NAME *nonterminals[TBLSZ];

int Flatten(TREENODE *node);
int TreeCheck(TREENODE *node);  /* returns 0 if OK */
void CodeGen(FILE *f, TREENODE *node, int skip);

void BuildNonterminalTable(TREENODE *node, NAME *nonterminals[]);
void BuildTerminalTable(TREENODE *node, NAME *nonterminals[], NAME *terminals[])
;
/* Turn on debugging I still have to make this turn offable */
int debug_flatten = 1;

main(void)
{
#if 1
  /* All this is concerned with writing out the debugging information.
     I'll worry about this later, right now it's on and it works, leave 
     it alone. */
   FILE *f;
   extern int yyparse();

   if (debug_flatten)
      printf("Debugging: on\n");

   if (yyparse() == 0) 
   {
      if (debug_flatten)
         PrintRawTree(stdout,root);

      assert(!TreeCheck(root));
      (void) Flatten(root);

      if (debug_flatten)
         PrintRawTree(stdout,root);	

      FreeTable(nonterminals);
      BuildNonterminalTable(root, nonterminals);
      BuildTerminalTable(root, nonterminals, terminals);

      f = fopen("code.y","w");
      
      if (f == NULL) 
      {
         printf("cannot open code file\n");
	 exit(10);
      }
       CodeGen(f, root,0);
   }
   else
      printf("*** Parse Error\n"); 
#endif

	       
#if 0
   extern int yylex(void);

   while (yylex())
      print_yylval();
#endif

   exit(0);
}
