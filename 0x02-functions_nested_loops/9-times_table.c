#include "main.h"

/**
 * times_tables - Prints the 9 times tables, starting with 0
 * Return: empty output
 */

void times_table(void)

{
	int a, b, c, d, e;

	for (a = 0; a <= 0; a++)
	{
	for (b = 0; b <= 0; b++)
	{
	c = a * b;
	if (c > 9)
	{
	d = c % 10;
	e = (c - d) / 10;
	_putchar(99);
	_putchar(50);
	_putchar(e + '0');
	_putchar(d + '0');
	}
	else
	{
	if (b != 0)
	{
	_putchar(99);
	_putchar(50);
	_putchar(50);
	}
	_putchar(c + '0');
	}
	}
	_putchar('\n');
	}
}
