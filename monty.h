#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * struct globals - global variable
 * @num: integer
 * @flag: integer
 * @line: string
 * @token: string
 * @opcod: opcode in Monty
 * @fil: file
 */
typedef struct globals
{
int num;
int flag;
char *line;
char *token;
char *opco;
FILE *fil;
} globals_t;

extern globals_t global;
/**
 * struct stack_s - stack (or queue)
 * @n: integer
 * @prev: previous
 * @next: next
 *
 * Description: doubly linked list
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
int n;
struct stack_s *prev;
struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and function
 * @opcode: opcode
 * @f: function
 *
 * Description: opcode, function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
char *opcode;
void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

void _mod(stack_t **stack, unsigned int x);
void _pchar(stack_t **stack, unsigned int x);
void _rotr(stack_t **stack, unsigned int x);
void _rotl(stack_t **stack, unsigned int x);
void _stack(stack_t **stack, unsigned int x);
void _queue(stack_t **stack, unsigned int x);
void _pstr(stack_t **stack, unsigned int x);
void _mul(stack_t **stack, unsigned int x);
void _verify2(stack_t **stack, unsigned int n);
void _error(stack_t **stack, unsigned int n);
void free_l(stack_t **stack);
void _div(stack_t **stack, unsigned int x);
void _sub(stack_t **stack, unsigned int x);
void _nop(stack_t **stack, unsigned int x);
int _verify1(char *num);
int _size_line(char *line);
char delete_jump(char *line);
void _swap(stack_t **stack, __attribute__((unused)) unsigned int x);
void _add(stack_t **stack, __attribute__((unused)) unsigned int x);
void _pint(stack_t **stack, unsigned int x);
void _pop(stack_t **stack, unsigned int x);
void (*func(char *tokens))(stack_t **stack, unsigned int x);
int main(__attribute__((unused)) int argc, char **argv);
void _pall(stack_t **stack, unsigned int x);
void _push(stack_t **stack, unsigned int x);

#endif
