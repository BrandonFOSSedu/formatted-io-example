all: output input printf

output: formatted-output.c
	gcc formatted-output.c -o output

input: formatted-input.c
	gcc formatted-input.c -o input
	./input < data.csv

printf: printf-specifiers.c
	gcc printf-specifiers.c -o printf