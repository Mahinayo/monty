#include "monty.h"

/**
 * _push - pushes an element to the stack
 * @stack: head
 * @x: number line
 */
void _push(stack_t **stack, unsigned int x)
{
	stack_t *temp;

	_verify2(stack, x);
	if (global.token)
	{
		temp = malloc(sizeof(stack_t));
		if (temp == NULL)
		{
			fputs("Error: malloc failed\n", stderr);
			exit(EXIT_FAILURE);
		}
		temp->n = global.num, temp->next = NULL;
		temp->prev = NULL;
		if (*stack)
		{
			if (global.flag == 1)
			{
				temp->next = *stack;
				(*stack)->prev = temp;
				*stack = temp;
			}
			else
			{
				while ((*stack)->next)
					*stack = (*stack)->next;
				(*stack)->next = temp, temp->prev = *stack;
				while ((*stack)->prev)
					*stack = (*stack)->prev;
			}
		}
		else
			*stack = temp;
	}
	else
	{
		free(global.line), fclose(global.fil);
		dprintf(2, "L%u: usage: push integer\n", x);
		free_l(stack);
		exit(EXIT_FAILURE);
	}
}
