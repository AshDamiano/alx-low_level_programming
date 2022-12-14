#include "main.h"

/**
 * main - prints the alphabet
 * Description: prints the alphabet, in lowercase
 * Return: void
 */

void print_alphabet(void)

{

	char hc;

	for (hc = 'a'; hc <= 'z'; hc++)
	{
		_putchar(hc);
	}

	_putchar('\n');
}

