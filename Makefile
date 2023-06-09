compile: _printf.c
	gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c -o debug -g

trace: debug
	gdb debug --tui

betty-all:
	betty *.c
