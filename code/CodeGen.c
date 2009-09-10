/*************************************************************************
             Copyright (C) 1986 by Manuel E. Bermudez
             Translated to C - 1991
**************************************************************************
     CodeGen.cm  This module is the driver for the Code Generator.   
**************************************************************************/

#include <stdlib.h>
/*
#include <stdio.h>
#include <header/CommandLine.h>
#include <header/Table.h>
#include <header/Text.h>
#include <header/Error.h>
#include <header/String_Input.h>
#include <header/Tree.h>
#include <header/Code.h>
#include <header/CodeGenerator.h>
*/

main(int argc, char *argv[])
{
/*   printf("\nPoint 1\n");  */
   InitializeTextModule();

/*   printf("\nPoint 2\n");  */
   InitializeTreeModule(); 

/*   printf("\nPoint 3\n");  */
   InitializeCode(argc,argv);

/*   printf("\nPoint 4\n");  */
   CodeGenerate(argc,argv);

   exit(0);
}
