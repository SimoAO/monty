#include "monty.h"

/**
 * swap - a function that swaps the top two elements of the stack
 * @h: head of the list
 * @lnum: line number
 */

void swap(stack_t **h, unsigned int lnum)
{
	int he;

	if (*h != NULL && (*h)->next != NULL)
	{
	he = (*h)->n;
	(*h)->n = (*h)->next->n;
	(*h)->next->n = he;
	}
	else
	{
	fprintf(stderr, "L%u: can't swap, stack too short\n", lnum);
	freee();
	exit(EXIT_FAILURE);
	}
}
