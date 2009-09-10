/************************************************************************
              Copyright (C) 1986 by Manuel E. Bermudez
              Translated to C - 1991
*************************************************************************

*************************************************************************
             STRING MODULE  - String.Input.cm
*************************************************************************/

#include <stdio.h>
#include <header/CommandLine.h>
#include <header/Table.h>
#include <header/Error.h>
#include <header/Text.h>
#include <header/String_Input.h>


void StringArrayToStringConstant (char *Name, String Constant)
{
   String StringName;
   StringName = String_Array_To_String(Name);
  
   if (StringName != Constant)
   {
      printf ("[String.Input]:String_Array_To_String_Constant ");

      while (*Name != '\0')
         putchar (*Name++);

      printf (" is not string %d\n",Constant);
      FatalError();
   }
}


void String_Array_To_String_Constant (char *Name, String Constant)
{
   String StringName;
   StringName = String_Array_To_String(Name);

   if (StringName != Constant)
   {
      printf ("[String.Input]:String_Array_To_String_Constant ");

      while (*Name != '\0')
         putchar (*Name++);

      printf (" is not string %d\n",Constant);
      FatalError();
   }
}


String String_Array_To_String (char *Name)
{
   char ch;
   ResetBufferInTextTable();

   while ((ch = *Name++) != '\0')
      AdvanceOnCharacter(ch);

   return (ConvertStringInBuffer());
}


String Convert_InputLineTo_String (FILE *InFile)
{
   char ch;
  
   ResetBufferInTextTable();

   while (((ch = getc(InFile)) != '\n')&&(!feof(InFile)))
     AdvanceOnCharacter(ch);

   return (ConvertStringInBuffer());
}


/*
 
ReadAll_StringsFrom (FILE *Name)
{
   char ch;
   String StringName;
   const char * fAttrib = "r";
   fopen (fAttrib, fAttrib);
			
   while ((ch = getc(Name)) != EOF)
      StringName = Convert_InputLineTo_String(Name);

   fclose (Name);
}

*/

