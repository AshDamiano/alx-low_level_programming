#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @b: The number of lines to draw
 * Return: empty
 */

int print_line(int b)

{
	int z

	if (b <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (z = 0; z < b; z++)
	{
	_putchar(95);
	}
	_putchar('\n');
	}
}
