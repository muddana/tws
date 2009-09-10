/***************************************************************************
              Copyright (C) 1986 by Manuel E. Bermudez
              Translated to C - 1991
****************************************************************************/

/***************************************************************************
      CONSTRAINER MODULE HEADER   -   Constrainer.h
****************************************************************************/
/* This module uses the abstract tree built by the parser to do type and
   error checking.  Error messages are printed but do not stop execution
   of the code generator.  Through decorations attached to tree nodes, type
   information is passed on to the code generator.                         
****************************************************************************/

extern Initialize_Constrainer();

extern void Constrain(void);

extern void AddIntrinsics(void);

extern void ProcessNode(TreeNode T);
