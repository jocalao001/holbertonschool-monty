#include "monty.h"
/**
  * pchar - print the char at the top of the stack
  * @stack: stack
  * @line_number: line number
  * Return: nothing
  */
void pchar(stack_t **stack, unsigned int line_number)
{
	if (!stack || !(*stack))
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	if (((*stack)->n >= 'a' && (*stack)->n <= 'z')
			|| ((*stack)->n >= 'A' && (*stack)->n <= 'Z'))
	{
		printf("%c\n", (*stack)->n);
	}
	else
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
		exit(EXIT_FAILURE);
	}
}
