#include "monty.c"

/**
 * add - a function that adds the top two elements of the stack
 * @h: head of the list
 * @lnum: line number
 */

void add(stack_t **h, unsigned int lnum)
{
	if (*h != NULL && (*h)->next != NULL)
	{
	(*h)->next->n += (*h)->n;
	pop(h, lnum);
	}
	else
	{
	fprintf(stderr, "L%u: can't add, stack too short\n", lnum);
	freee();
	exit(EXIT_FAILURE);
	}
}
