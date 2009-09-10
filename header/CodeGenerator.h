/**************************************************************************
            Copyright (C) 1986 by Manuel E. Bermudez
            Translated to C - 1991
***************************************************************************/
/**************************************************************************
        CODE GENERATOR MODULE HEADER   -   CodeGenerator.h
***************************************************************************/
/* This module generates code based on the tree built by the parser and the
   Constrainer. The only visible procedure is CodeGenerate() which 
   initializes the data structures, reads in the tree and processes all
   nodes of the tree.  Then the code is written out to the file _CODE,
   which will be used by the Interpreter to run the program.          */



extern void CodeGenerate(int argc, char *argv[]);

extern void InitializeCodeGenerator(int argc, char *argv[]);

extern void InitializeMachineOperations(void);

extern void InitializeNodeNames(void);
