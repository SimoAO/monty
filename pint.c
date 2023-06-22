#include "monty.h"

/**
 * pint - a function that prints the value at the top of the stack
 * followed by a new line
 * @h: head of the list
 * @lnum: line number
 */

void pint(stack_t **h, unsigned int lnum)
{
	if (*h != NULL)
	printf("%d\n", (*h)->n);
	else
	{
	fprintf(stderr, "L%u: can't pint, stack empty\n", lnum);
	freee();
	exit(EXIT_FAILURE);
	}
}
