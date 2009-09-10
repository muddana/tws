TWS  = ..
TWSBIN = $(TWS)/bin
SRCS = Main.c GenericTrees.c y.tab.c lex.yy.c Trees.c SymbolTable.c		  Flatten.c TreeCheck.c CodeGen.c BuildTables.c
CC  = gcc -g -ansi
#
OBJS = Main.o GenericTrees.o y.tab.o lex.yy.o Trees.o SymbolTable.o	  Flatten.o TreeCheck.o CodeGen.o BuildTables.o
#
# EXTRA_INCLUDES = -I/usr/local/include
# These options are for the libraries to link in depending on which version
# of flex and yacc you are using.
#
# Turn this on for Linux machines.
LOCAL_LIBRARIES = -lfl
# Turn this on for CIS Sun machines.
#LOCAL_LIBRARIES = -lfl -ll -ly
#LOCAL_LIBRARIES = -ll -ly

all:: $(TWSBIN)/pgen

$(TWSBIN)/pgen: $(OBJS)
	$(CC) -o $(TWSBIN)/pgen $(OBJS) $(LOCAL_LIBRARIES)
	chmod 755 $(TWSBIN)/pgen

y.tab.o:	y.tab.c
	$(CC) -c y.tab.c 

ytab.h y.tab.c:	Parser.y Tokenizer.h Trees.h Nonterminals.h
		yacc -dv Parser.y

lex.yy.o:	lex.yy.c
	$(CC) -c lex.yy.c

lex.yy.c:	Tokenizer.l y.tab.h Tokenizer.h
		lex Tokenizer.l

clean::
		rm -f $(OBJS) $(TWSBIN)/pgen y.tab.c y.tab.h y.output lex.yy.o lex.yy.c
		rm -f core *~ a.out

