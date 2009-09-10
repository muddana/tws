TWS	= ..
INCLUDE	= $(TWS)
CC      = gcc
CCFLAGS = -c -ansi -I$(INCLUDE)

#=====================================================
# Build all the object files!
#=====================================================

all:	Code.o CommandLine.o Dcln.o Error.o Open_File.o \
	String_Input.o Table.o Text.o Tree.o CodeGen.o Constrain.o \
	Print_Tree.o $(TWS)/bin/print_tree

clean:	
	rm -f Code.o CommandLine.o Dcln.o Error.o Open_File.o \
	String_Input.o Table.o Text.o Tree.o CodeGen.o Constrain.o \
	Print_Tree.o $(TWS)/bin/print_tree

Code.o:	 Code.c
	$(CC) $(CCFLAGS) Code.c

CommandLine.o:	 CommandLine.c
	$(CC) $(CCFLAGS) CommandLine.c

Dcln.o:	 Dcln.c
	$(CC) $(CCFLAGS) Dcln.c

Error.o:	 Error.c
	$(CC) $(CCFLAGS) Error.c

Open_File.o:	 Open_File.c
	$(CC) $(CCFLAGS) Open_File.c

String_Input.o:	 String_Input.c
	$(CC) $(CCFLAGS) String_Input.c

Table.o:	 Table.c
	$(CC) $(CCFLAGS) Table.c

Text.o:	 Text.c
	$(CC) $(CCFLAGS) Text.c

Tree.o:	 Tree.c
	$(CC) $(CCFLAGS) Tree.c

CodeGen.o:	CodeGen.c
	$(CC) $(CCFLAGS) CodeGen.c

Constrain.o:	 Constrain.c
	$(CC) $(CCFLAGS) Constrain.c

Print_Tree.o:	Print_Tree.c
	$(CC) $(CCFLAGS) Print_Tree.c

$(TWS)/bin/print_tree:	 CommandLine.o Error.o Open_File.o String_Input.o \
	Table.o Text.o Tree.o Print_Tree.o
	$(CC) -o $(TWS)/bin/print_tree CommandLine.o Error.o \
	Open_File.o String_Input.o Table.o Text.o Tree.o Print_Tree.o 
