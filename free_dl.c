#include "monty.c"

/**
 * free_dl - a function that frees the stack
 * @h: head of the list
 */

void free_dl(stack_t *h)
{
	stack_t *he = NULL;

	while (h != NULL)
	{
	he = h->next;
	free(h);
	h = he;
	}
}
