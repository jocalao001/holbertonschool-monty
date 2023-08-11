#include "monty.h"
instruction_t instructions[] = {
	{"push", push},
	{"pall", pall},
	{"pint", pint},
	{"pop", pop},
	{"swap", swap},
	{"add", add},
	{"nop", nop},
	{"sub", sub},
	{"div", _div},
	{"mul", mul},
	{"mod", mod},
	{"pchar", pchar},
	{"pstr", pstr},
	{"NULL", NULL}
};
