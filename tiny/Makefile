MYOBJS	= .
TWS	= ..
TWSOBJS	= $(TWS)/code
INCLUDE = $(TWS)
CCFLAGS = -c -g -ansi -I$(INCLUDE)
CC	= gcc
LD	= gcc 

all:	Constrain CodeGen parser/parse

parser/parse:	parser/parse.tiny parser/lex.tiny
		make -C parser

Constrain:	$(TWSOBJS)/Constrain.o $(MYOBJS)/Constrainer.o \
		$(TWSOBJS)/String_Input.o $(TWSOBJS)/CommandLine.o \
		$(TWSOBJS)/Dcln.o $(TWSOBJS)/Error.o \
		$(TWSOBJS)/Text.o $(TWSOBJS)/Tree.o \
		$(TWSOBJS)/Table.o $(TWSOBJS)/Open_File.o
	$(LD)   $(TWSOBJS)/Constrain.o $(MYOBJS)/Constrainer.o \
		$(TWSOBJS)/String_Input.o $(TWSOBJS)/CommandLine.o \
		$(TWSOBJS)/Dcln.o $(TWSOBJS)/Error.o \
		$(TWSOBJS)/Text.o $(TWSOBJS)/Tree.o \
		$(TWSOBJS)/Table.o $(TWSOBJS)/Open_File.o \
		-o Constrain		
		chmod 750 Constrain

CodeGen:	$(TWSOBJS)/Code.o $(TWSOBJS)/CodeGen.o \
		$(MYOBJS)/CodeGenerator.o $(TWSOBJS)/String_Input.o \
		$(TWSOBJS)/CommandLine.o $(TWSOBJS)/Dcln.o \
		$(TWSOBJS)/Error.o $(TWSOBJS)/Text.o \
		$(TWSOBJS)/Tree.o $(TWSOBJS)/Table.o \
		$(TWSOBJS)/Open_File.o
	  $(LD)	$(TWSOBJS)/Code.o $(TWSOBJS)/CodeGen.o \
		$(MYOBJS)/CodeGenerator.o $(TWSOBJS)/String_Input.o \
		$(TWSOBJS)/CommandLine.o $(TWSOBJS)/Dcln.o \
		$(TWSOBJS)/Error.o $(TWSOBJS)/Text.o \
		$(TWSOBJS)/Tree.o $(TWSOBJS)/Table.o \
		$(TWSOBJS)/Open_File.o \
		-o CodeGen	
		chmod 750 CodeGen

$(MYOBJS)/Constrainer.o:	 $(MYOBJS)/Constrainer.c
	$(CC) $(CCFLAGS) $(MYOBJS)/Constrainer.c
	chmod 640 Constrainer.c

$(MYOBJS)/CodeGenerator.o:	 $(MYOBJS)/CodeGenerator.c
	$(CC) $(CCFLAGS) $(MYOBJS)/CodeGenerator.c
	chmod 640 CodeGenerator.c

clean:	
	rm -f Constrain CodeGen _* $(MYOBJS)/*.o
	make -C parser clean
