#include "monty.h"
/**
  * push - this function add elements on the stack
  * @stack: double linked list of a stack
  * @line_number: line number
  * Return: nothing
  */
void push(stack_t **stack, unsigned int line_number)
{
	char *valor = strtok(NULL, " \n");
	stack_t *nuevo;
	int i;

	if (valor)
	{
		for (i = 0; valor[i]; i++)
		{
			if ((valor[i] >= 48 && valor[i] <= 57) || valor[i] == '-')
			{
				continue;
			}
			else
			{
				free_stack(*stack);
				fprintf(stderr, "L%u: usage: push integer\n", line_number);
				exit(EXIT_FAILURE);
			}
		}
	}
	if (valor == NULL)
	{
		free_stack(*stack);
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	nuevo = malloc(sizeof(stack_t));
	if (nuevo == NULL)
	{
		free_stack(*stack);
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	nuevo->n = atoi(valor);
	nuevo->prev = NULL;
	nuevo->next = *stack;
	if (*stack)
		(*stack)->prev = nuevo;
	*stack = nuevo;
}

/**
 * pall - this function print in the  output
 * @stack: double linked list of a stack
 * @line_number: line number
 * Return: nothing
 */
void pall(stack_t **stack, __attribute__((unused)) unsigned int line_number)
{
	stack_t *actual = *stack;

	while (actual)
	{
		printf("%d\n", actual->n);
		actual = actual->next;
	}
}
