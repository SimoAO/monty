#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <ctype.h>
#include <stdarg.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct monty_s - stocked all the functions
 * @file: the file
 * @stack: the stack
 * @lnum: line number
 * @line: the line working on
 *
 * Description: opcode of all functions working with
 */

typedef struct monty_s
{
	FILE *file;
	stack_t *stack;
	unsigned int line_number;
	char *line;
} monty_t;
extern monty_t monty;

void push(stack_t **h, unsigned int lnum);
void pall(stack_t **h, unsigned int lnum);
void pint(stack_t **h, unsigned int lnum);
void pop(stack_t **h, unsigned int lnum);
void swap(stack_t **h, unsigned int lnum);
void add(stack_t **h, unsigned int lnum);
void nop(stack_t **h, unsigned int lnum);
void freee(void);
void openu(int argc, char *argv);
void readit(void);
void init(void);


#endif
