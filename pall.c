#include "monty.h"

/**
 * pall - a function that prints all the values on the stack
 * starting from the top of the stack
 * of the stack
 * @h: head of the list
 * @lnum: line number
 */

void pall(stack_t **h, unsigned int lnum)
{
	stack_t *he = *h;

	if (he == NULL)
	{
	return;
	}
	while (he)
	{
	printf("%d\n", he->n);
	he = he->next;
	}
}
