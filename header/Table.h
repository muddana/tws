
typedef union {
	char ch;
	int val;
} Cell;

typedef struct {
	unsigned is_fixed_size : 1;
	unsigned is_stack : 1;
} Memory_Parameters;

typedef Cell *Memory_Model;

typedef struct {
	int Size;
	int Current_Size;
	Memory_Parameters Parameters;
	Memory_Model Contents;
} *Memory_Header, *Array, *Buffer, *Stack, *Table, Definition_Node;

extern Array AllocateArray();

extern Table AllocateTable();

extern Stack AllocateStack();

extern Stack AllocateFixedStack();

extern Buffer AllocateBuffer();

#define Element(T,I) ((I<T->Size)?(((T->Contents)+I)->val):0)

#define CharacterElement(T,I) ((I<T->Size)?(((T->Contents)+I)->ch):'\0')

extern void Assign(Memory_Header Table, int index, int new_value);

extern void CharacterAssign (Memory_Header Table, int index, char new_value);

#define Push( S , obj ) Assign(S,++(S->Current_Size),obj)

#define PushCharacter( S , obj )\
        CharacterAssign(S,++(S->Current_Size),obj)

#define Pop( S) (((S->Contents)+((S->Current_Size)--))->val)

#define PopCharacter( S ) (((S->Contents)+((S->Current_Size)--))->ch)

#define Top( Stack ) Element( Stack , Stack -> Current_Size ) 

#define TopCharacter( Stack )\
        CharacterElement( Stack , Stack -> Current_Size )

#define Empty( Stack ) (Stack -> Current_Size = 0)

#define IsEmpty( Stack ) ( Stack -> Current_Size == 0 )

#define PopOff(Stack,size)\
	if ( size > Stack -> Current_Size )\
	   Stack -> Current_Size = 0;\
	else\
	   Stack -> Current_Size = Stack -> Current_Size - size

#define SizeOf( Object )\
	( ((Object -> Parameters) . is_stack)\
	    ?( Object -> Current_Size ): ( Object -> Size ))
