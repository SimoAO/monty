#include "monty.h"

/**
 * main - a function that runs the monty
 * entry program
 * @argc: number of arguments
 * @argv: argument vector
 *
 * Return: EXIT_SUCCESS
 */

int main(int argc, char **argv)
{
	init();
	openu(argc, argv[]);
	readit();
	freee();
	return (EXIT_SUCCESS);
}
