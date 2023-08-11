#include "monty.h"
/**
  * sub - subtracts the top element from the second top element of the stack
  * @stack: stack
  * @line_number: line number
  * Return: nothing
  */
void sub(stack_t **stack, unsigned int line_number)
{
	int sub;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	sub = (*stack)->next->n - (*stack)->n;
	pop(stack, line_number);
	(*stack)->n = sub;
}
