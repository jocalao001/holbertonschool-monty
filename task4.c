#include "monty.h"
/**
  * add - adds the top two elements of the stack
  * @stack: stack
  * @line_number: line number
  * Return: nothing
  */
void add(stack_t **stack, unsigned int line_number)
{
	int add;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	add = (*stack)->n + (*stack)->next->n;
	pop(stack, line_number);
	(*stack)->n = add;
}
