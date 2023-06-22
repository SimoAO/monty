#include "monty.h"

/**
 * pop - a function that removes the top element of
 * the stack
 * @h: head of the list
 * @lnum: line number
 */

void pop(stack_t **h, unsigned int lnum)
{
	stack_t *he = *h;

	if (*h != NULL)
	{
	*h = (*h)->next;
	if (*h != NULL)
	(*h)->prev = NULL;
	free(he);
	}
	else
	{
	fprintf(stderr, "L%u: can't pop an empty stack\n", lnum);
	freee();
	exit(EXIT_FAILURE);
	}
}
