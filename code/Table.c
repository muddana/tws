#define true 1
#define false 0

typedef int boolean;

typedef union {
	char ch;
	int val;
} Cell;

typedef struct {
	unsigned int is_fixed_size : 1;
	unsigned int is_stack : 1;
} Memory_Parameters;

typedef Cell *Memory_Model;

typedef struct {
	int Size;
	int Current_Size;
	Memory_Parameters Parameters;
	Memory_Model Contents;
} *Memory_Header, Definition_Node;

extern void *calloc();


static Memory_Header AllocateStructure(int start_size, unsigned int Fixed, 
                                       unsigned int As_Stack)
{
   int index;
   Memory_Header Temporary = 
		(Memory_Header) calloc(1,sizeof(Definition_Node));
   Temporary -> Size = start_size;
   Temporary -> Current_Size = 0;
   (Temporary -> Parameters) . is_fixed_size  = Fixed;
   (Temporary -> Parameters) . is_stack       = As_Stack;
   Temporary -> Contents =
		(Memory_Model) calloc ( start_size , sizeof(Cell) );

   for (index = 0; index < start_size; ++index) 
      ((Temporary -> Contents) + index) -> val = 0;
	
   return(Temporary);
}


Memory_Header AllocateArray(int size)
{
   return (AllocateStructure(size,true,false));
}


Memory_Header AllocateTable(int size)
{
   return (AllocateStructure(size,false,false));
}


Memory_Header AllocateStack(int size)
{
   return (AllocateStructure(size+1,false,true));
}


Memory_Header AllocateFixedStack(int size)
{
   return (AllocateStructure(size+1,true,true));
}


Memory_Header AllocateBuffer(int size)
{
   return (AllocateStructure(size+1,true,true));
}


int Element(Memory_Header Table , int index)
{
   if (index < Table -> Size)
      return ( ((Table -> Contents) + index) -> val );

   else 
      return ( 0 );
}


char CharacterElement(Memory_Header Table , int index)
{
   if (index < Table -> Size)
      return ( ( (Table -> Contents) + index) -> ch );

   else 
      return ( '\0' );
}


void Assign(Memory_Header Table , int index , int new_value)
{
    if (index < Table -> Size) 
       ((Table -> Contents) + index) -> val = new_value;

    else if (! ((Table -> Parameters) . is_fixed_size)) 
    {
       int New_size = ((Table -> Size)/5) +  (Table->Size);
       Memory_Model Temporary;
       int i;

       if (New_size <= index) 
	  New_size = index + 1;

       else if (New_size <= (Table -> Size)) 
	  New_size = (Table -> Size) + 5;

       Temporary = (Memory_Model) calloc ( New_size , sizeof(Cell) );

       for ( i = 0; i < (Table -> Size); ++i )
          *(Temporary + i) = *((Table -> Contents) + i);

       free((Table -> Contents));
       Table -> Contents = Temporary;
       Table -> Size = New_size;
       (Temporary + index) -> val = new_value;
    }
}


void CharacterAssign (Memory_Header Table, int index, char new_value)
{
   if (index < Table -> Size) 
      ((Table -> Contents) + index) -> ch = new_value;

   else if (! ((Table -> Parameters) . is_fixed_size)) 
   {
      int New_size = ((Table -> Size)/5) + (Table -> Size);
      Memory_Model Temporary;
      int i;

      if (New_size <= index)
         New_size = index + 1;

      else if (New_size <= (Table -> Size))
         New_size = (Table -> Size) + 5;

      Temporary = (Memory_Model) calloc (New_size , sizeof(Cell));

      for (i = 0; i < (Table -> Size); ++i)
         *(Temporary + i) = *(Table -> Contents + i);

      free(Table -> Contents);
      Table -> Contents = Temporary;
      Table -> Size = New_size;
      (Temporary + index) -> ch = new_value;
   }
}


void Push (Memory_Header Stack, int object)
{
   Assign (Stack, ++(Stack -> Current_Size), object);
}


void PushCharacter (Memory_Header Stack, char object)
{
   CharacterAssign (Stack, ++(Stack->Current_Size), object);
}


int Pop (Memory_Header Stack)
{
   return (Element (Stack, (Stack -> Current_Size)--));
}


char PopCharacter (Memory_Header Stack)
{
   return (CharacterElement (Stack, --(Stack -> Current_Size)));
}


int Top (Memory_Header Stack)
{
   return (Element (Stack, Stack -> Current_Size));
}


char TopCharacter (Memory_Header Stack)
{
   return (CharacterElement (Stack, Stack -> Current_Size));
}


void Empty (Memory_Header Stack)
{
   Stack -> Current_Size = 0;
}


IsEmpty (Memory_Header Stack)
{
   return (Stack -> Current_Size == 0);
}


PopOff (Memory_Header Stack , int size)
{
   if (size > Stack -> Current_Size)
      Stack -> Current_Size = 0;

   else
      Stack -> Current_Size = Stack -> Current_Size - size;
}


int SizeOf (Memory_Header Object)
{
   if ((Object -> Parameters) . is_stack)
      return ( Object -> Current_Size );

   else
      return ( Object -> Size );
}
