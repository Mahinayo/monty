#include "monty.h"

/**
 * _size_line - no of the line
 * @line: lines
 * Return: line
 */
int _size_line(char *line)
{
	unsigned int con = 0;

	while (line[con])
	{
		con++;
	}
	return (con);
}
