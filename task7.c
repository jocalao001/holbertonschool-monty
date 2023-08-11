#include "monty.h"
/**
  * _div - divides the second top element of the stack
  * @stack: stack
  * @line_number: line number
  * Return: nothing
  */
void _div(stack_t **stack, unsigned int line_number)
{
	int division;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	division = (*stack)->next->n / (*stack)->n;
	pop(stack, line_number);
	(*stack)->n = division;
}
