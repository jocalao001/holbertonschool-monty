#include "monty.h"
/**
  * mul - multiplies the second top element with the top element of the stack
  * @stack: stack
  * @line_number: line number
  * Return: nothing
  */
void mul(stack_t **stack, unsigned int line_number)
{
	int mul;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	mul = (*stack)->next->n * (*stack)->n;
	pop(stack, line_number);
	(*stack)->n = mul;
}
