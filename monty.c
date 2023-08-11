#include "monty.h"
/**
 * main - funcion principal
 * @argc: cantidad de argumentos
 * @argv: lista de argumento
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	stack_t *stack = NULL;
	int i = 0, line_number = 0;
	char buffer[1000], *opcode;
	FILE *file = fopen(argv[1], "r");

	if (argc != 2)
		error_de_uso();
	if (file == NULL)
		error_archivo(argv[1]);
	while (fgets(buffer, 1000, file))
	{
		line_number++;
		opcode = strtok(buffer, " \n");
		if (opcode == NULL || opcode[0] == '#')
			continue;
		while (instructions[i].opcode)
		{
			if (strcmp(instructions[i].opcode, opcode) == 0)
			{
				instructions[i].f(&stack, line_number);
				break;
			}
			i++;
		}
		if (instructions[i].opcode == NULL)
		{
			fprintf(stderr, "L%u: unknown instruction %s\n",  line_number, opcode);
			exit(EXIT_FAILURE);
		}
		i = 0;
	}
	fclose(file);
	free_stack(stack);
	return (EXIT_SUCCESS);
}
