#include "monty.h"

/**
 * delete_jump - delete line
 * @line: line
 * Return: line
 */
char delete_jump(char *line)
{
	int ta = _size_line(line);

	line[ta - 1] = '\0';
	return (*line);
}
