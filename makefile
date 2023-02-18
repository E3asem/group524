Build1:
	gcc -E stack.c -o stack.i
	gcc -S stack.c -o stack.s
	gcc -c stack.c -o stack.o
	gcc stack.c -o stack.exe
	gcc stack.c -o stack.elf
	gcc stack.c -o stack.hex
Build2:
	gcc -E queue.c -o queue.i
	gcc -S queue.c -o queue.s
	gcc -c queue.c -o queue.o
	gcc queue.c -o queue.exe
	gcc queue.c -o queue.elf
	gcc queue.c -o queue.hex	


	