#include "monty.h"

/**
 * init - a function htat initialize the stack
 */

void init(void)
{
	mon.line = NULL;
	mon.file = NULL;
	mon.head = NULL;
	mon.lnum = 1;
}
