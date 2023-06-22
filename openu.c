#include "monty.h"

/**
 * openu - a function that runs the monty program
 * @argc: number of arguments
 * @argv: argument vector
 */

void openu(int argc, char *argv[])
{
	if (argc != 2)
	{
	fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
	}
	mon.file = fopen(argv[1], "r");
	if (mon.file == NULL)
	{
	fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
	exit(EXIT_FAILURE);
	}
}
