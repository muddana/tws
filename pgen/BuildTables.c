#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include "Tokenizer.h"
#include "y.tab.h"
#include "Nonterminals.h"
#include "GenericTrees.h"
#include "Trees.h"
#include "SymbolTable.h"

#define MYDEBUG 0


static void VisitEachT(TREENODE *node, NAME *nonterminals[], NAME *terminals[]);
static void VisitEachNT(TREENODE *node, NAME *nonterminals[]);

/*****************************************************************************
 * BuildNonterminalTable() builds the table of Nonterminals.
 */
void BuildNonterminalTable(TREENODE *node, NAME *nonterminals[])
{
    TREENODE *kid;

    switch (node->token) {
    case t_rule:
	kid = GetChild(node,1);
#if MYDEBUG
        printf("CALLING INSERT IN BUILTABLE, kid->string IS %s\n",
                kid->string);
#endif
	Insert(nonterminals,kid->string);
	break;
    default:
	VisitEachNT(node,nonterminals);
	break;
    }

}

/*****************************************************************************
 * VisitEachNT() visits each node of the tree and uses the child information
 * to build the Nonterminals table.
 */
static void VisitEachNT(TREENODE *node, NAME *nonterminals[])
{

    TREENODE *kid;

    kid = GetChild(node,1);
    while (kid != 0) {
	BuildNonterminalTable(kid,nonterminals);
	kid = NextSibling(kid);
    }
}

/*****************************************************************************
 * BuildNonterminalTable() builds the table of Terminals.
 */
void BuildTerminalTable(TREENODE *node, NAME *nonterminals[], NAME *terminals[])
{
    TREENODE *kid;

    switch (node->token) {
    case t_rule:
	kid = GetChild(node,2);
	while (kid != 0) {
	    BuildTerminalTable(kid,nonterminals,terminals);
	    kid = NextSibling(kid);
	}
	break;
    case IDENTIFIER:
	if (!Lookup(nonterminals,node->string)) {
	    if (!Lookup(terminals,node->string)) {
#if MYDEBUG
        printf("CALLING INSERT IN BUILTABLE, node->string IS %s\n",
                node->string);
#endif
		Insert(terminals,node->string);
	    }
	}
	break;
    default:
	VisitEachT(node,nonterminals,terminals);
	break;
    }


}

/*****************************************************************************
 * VisitEachT() visits each node of the tree and uses the child information
 * to build the Terminals table.
 */
static void VisitEachT(TREENODE *node, NAME *nonterminals[], NAME *terminals[])
{

    TREENODE *kid;

    kid = GetChild(node,1);
    while (kid != 0) {
	BuildTerminalTable(kid,nonterminals,terminals);
	kid = NextSibling(kid);
    }
}

