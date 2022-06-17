#include "monty.h"

/**
 * _pall - prints all the values on the stack,
 * starting from the top of the stack
 * @stack: head
 * @x: num linea
 */
void _pall(stack_t **stack, unsigned int x)
{
	stack_t *temp;

	temp = *stack;
	if (x)
		while (temp)
		{
			printf("%d\n", temp->n);
			temp = temp->next;
		}
}
