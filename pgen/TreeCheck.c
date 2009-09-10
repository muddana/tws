#include <stdio.h>
#include <assert.h>
#include "Tokenizer.h"
#include "y.tab.h"
#include "Nonterminals.h"
#include "GenericTrees.h"
#include "Trees.h"

/* Check and see that all the tokens are good ones. */
int TreeCheck(TREENODE *node)
{
   TREENODE *kid;
   int rval = 0;

   switch (node->token) 
   {
      case t_spec:
      case t_defs:
      case t_def:
      case t_rules:
      case t_rule:
      case t_empty:
      case t_catenate:
      case OR:
      case ACTION:
      case PIPE:
      case PLUS:
      case STAR:
      case QUESTION:
      case LIST:
      case IDENTIFIER:
      case LITERAL:
      case STRING:
         break;
	 
      default:
	 printf("*** unrecognized token: ",node->string);
	 printf("%s\n",node->string);
	 return 1;
	 break;
   }

   kid = GetChild(node,1);
   while (kid != 0) 
   {
      rval |= TreeCheck(kid);
      kid = NextSibling(kid);
   }

   return rval;
}
