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
#include <header/Dcln.h>
#include <header/Constrainer.h>

main(int argc, char *argv[])
{
   InitializeConstrainer(argc,argv);
   Constrain();
   exit(0);
}
