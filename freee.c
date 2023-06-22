#include "monty.h"

/**
 * freee - a function that frees allocated memory
 */

void freee(void)
{
	free(mon.line);
	free_dl(mon.stack);
	fclose(mon.file);
}
