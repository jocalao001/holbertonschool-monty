#include "monty.h"
/**
 * error_de_uso - prints an error message
 *
 * Return: Always 0.
 */
void error_de_uso(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}
/**
 * error_archivo - prints an error message
 * @argv: argv given by manin
 *
 * Return: nothing
 */
void error_archivo(char *argv)
{
	fprintf(stderr, "Error: Can't open file %s\n", argv);
	exit(EXIT_FAILURE);
}
