TWS	= ..
TWSBIN	= $(TWS)/bin
TWSOBJS	= $(TWS)/code
INCLUDE = $(TWS)
THISDIR	= .
CC	= gcc
LD	= gcc -gh
CCFLAGS = -g -c -ansi -I$(INCLUDE)

$(TWSBIN)/interpret:	$(THISDIR)/y.tab.o $(THISDIR)/lex.yy.o \
		$(THISDIR)/Machine.o $(THISDIR)/Interpret.o \
		$(THISDIR)/Interpreter.o $(TWSOBJS)/String_Input.o \
		$(TWSOBJS)/CommandLine.o \
		$(TWSOBJS)/Error.o $(TWSOBJS)/Text.o \
		$(TWSOBJS)/Table.o \
		$(TWSOBJS)/Open_File.o \
		 
	$(LD) \
	$(THISDIR)/Machine.o $(THISDIR)/Interpret.o \
	$(THISDIR)/Interpreter.o $(TWSOBJS)/String_Input.o \
	$(THISDIR)/lex.yy.o $(THISDIR)/y.tab.o \
	$(TWSOBJS)/CommandLine.o \
	$(TWSOBJS)/Error.o $(TWSOBJS)/Text.o \
	$(TWSOBJS)/Table.o \
	$(TWSOBJS)/Open_File.o -o $(TWSBIN)/interpret
	chmod 755 $(TWSBIN)/interpret

lex.yy.o: lex.yy.c
	$(CC) -c -g -ansi lex.yy.c

lex.yy.c: interpreter.l
	flex interpreter.l 

y.tab.o: y.tab.c
	$(CC) $(CCFLAGS) y.tab.c

y.tab.c y.tab.h: interpreter.y
	yacc -dv interpreter.y

Machine.o:	Machine.c
	$(CC) $(CCFLAGS) Machine.c

Interpret.o:	Interpret.c
	$(CC) $(CCFLAGS) Interpret.c

Interpreter.o:	Interpreter.c
	$(CC) $(CCFLAGS) Interpreter.c

clean: 
	rm -f Machine.o Interpret.o Interpreter.o $(TWSBIN)/interpret \
		y.tab.c y.tab.h lex.yy.o lex.yy.c y.tab.o
