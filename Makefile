
all:
	make -C code
	make -C interpreter
	make -C pgen
	make -C parser
	make -C tiny

clean:
	make -C code clean
	make -C interpreter clean
	make -C pgen clean
	make -C parser clean
	make -C tiny clean

