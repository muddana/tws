INCLUDE	= ..
CC      = gcc
CCFLAGS = -c -ansi -I$(INCLUDE)

#=====================================================
# Build all the object files!
#=====================================================

all:	DLists.o GenericTrees.o Main.o Trees.o

clean:	
	rm -f DLists.o GenericTrees.o Main.o Trees.o

DLists.o:	DLists.c
	$(CC) $(CCFLAGS) DLists.c

GenericTrees.o:	GenericTrees.c
	$(CC) $(CCFLAGS) GenericTrees.c

Main.o:	Main.c
	$(CC) $(CCFLAGS) Main.c

Trees.o:	Trees.c
	$(CC) $(CCFLAGS) Trees.c
