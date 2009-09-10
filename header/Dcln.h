/***************************************************************************
             Copyright (C) 1986 by Manuel E. Bermudez
             Translated to C - 1991
****************************************************************************
****************************************************************************
            DECLARATION TABLE MODULE HEADER  -   Dcln.h
****************************************************************************
    This module implements the declaration table.

Procedures and Functions

     InitializeDeclarationTable();
      - Initializes the declaration table
     DTEnter(S,T) String S; TreeNode T;
      - Enters the name S into the current scope, with the tree node T.
        The Constrainer uses this procedure to enter declarations as it
        encounters them. 
     TreeNode Lookup(S) String S;
      - Returns the tree node with which current declaration of S was
        entered.
     OpenScope();
      - Opens a declaration scope
     CloseScope();
      - Closes the current scope
     boolean IsLocal(S) String S;
      - Returns true only if S has been declared in the current scope

The following are repeats in C version/port:
#extern InitializeDeclarationTable();
#extern DTEnter();
#extern OpenScope();
#extern CloseScope();
***************************************************************************/ 
      
#define true 1
#define false 0
#define NullScope 0
#define NullDeclaration 0

typedef int boolean;

struct DclnStorage {
   Stack CurrentDcln;
   Stack Name;
   Stack Prior;
   Stack Dcln;
 }*DclnTable;

extern int CurrentScope, LastDeclaration;
extern TreeNode Lookup(String S, TreeNode Source);
extern boolean IsLocal(String S);
