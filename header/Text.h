/************************************************************
               TEXT MODULE HEADER   -   Text.h
*************************************************************

--- Consecutive, efficient storage of strings, AS INTEGERS.

--- The internal representation of the string is the row
    number.

--- Built "on top of" the Table module, using hash-coded
    techniques.

--- Arbitrary number of strings, of arbitrary length.

--- A segment of the table can be "reserved".

         +----------------------------
      1  + <identifier>               
         +----------------------------
      2  + <string>                  
         +----------------------------
      3  + <integer>                         
         +----------------------------
      4  + begin                      
         +----------------------------
      5  + end                        
         +----------------------------
      6  +  . . .                     
         +----------------------------
************************************************************/

#define UndefinedString 0

typedef int String;

extern int LowerBoundary, UpperBoundary;

extern void InitializeTextModule(void);
extern int TextSize(void);
extern void ResetBufferInTextTable(void);
extern void AdvanceOnCharacter(char c);
extern int ConvertStringInBuffer(void);
extern void FreezeLowerBound(void);
extern void FreezeUpperBound(void);
extern char Character(int S, int i);
extern int StringLength(int S);
extern void Write_String(FILE *file, int S);
extern void WriteString(FILE *file, int S);
extern int IsStringReserved(int S);
extern void PrintAllStrings(FILE *file);
