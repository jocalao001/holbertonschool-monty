#include "monty.h"

/**
 * push_op - adds a new node at the stack
 * @stack: pointer to the head of the stack
 * @line_number: number of the current line
 *
 * Return: void.
 */
void push_op(stack_t **stack, unsigned int line_number)
{
	int temp;
	stack_t *new;

	if (var.argum == NULL || !is_num(var.argum))
	{
		fprintf(stderr, "L%u: usage: push integer\n", var.line_num);
		freeStack();
		fclose(var.fp);
		exit(EXIT_FAILURE);
	}

	(void)stack, (void)line_number;

	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		fclose(var.fp);
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	temp = atoi(var.argum);
	var.ndata = temp;

	new->n = var.ndata;

	new->next = var.head;
	new->prev = NULL;
	if ((var.head) != NULL)
	{
		(var.head)->prev = new;
	}

	var.head = new;
}
