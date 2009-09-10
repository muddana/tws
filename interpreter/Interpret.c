#include <stdio.h>
#include <header/CommandLine.h>
#include <header/Table.h>
#include <header/Text.h>
#include <header/Error.h>
#include <header/String_Input.h>


main(int argc, char *argv[])
{
   InitializeTextModule();
   Interpret(argc,argv);
}
