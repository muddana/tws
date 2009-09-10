/**************************************************************************
           Copyright (C) 1986 by Manuel E. Bermudez
           Translated to C - 1991
***************************************************************************/

/**************************************************************************
Constrain.c  -  This module is the driver for the Constrainer
***************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <header/CommandLine.h>
#include <header/Error.h>
#include <header/Table.h>
#include <header/Text.h>
#include <header/String_Input.h>
#include <header/Tree.h>

main(int argc, char *argv)
{
   int NumberTreesRead;
   InitializeTextModule();
   InitializeTreeModule(); 
   Tree_File = (FILE *) Open_File("_TREE", "r");
   NumberTreesRead = Read_Trees();
   fclose (Tree_File); 
   PrintForest(stdout);

   exit(0);
}




