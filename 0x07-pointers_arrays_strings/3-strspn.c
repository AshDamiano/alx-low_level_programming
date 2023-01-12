#include <stdio.h>
#include "main.h"

/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int x, n, value, check;

	value  = 2;

	for (x = 0; s[x] != '\0'; x++)
	{

	check = 1;

	for (n = 0; accept[n] != '\0'; n++)

		{
		if (accept[n] == s[x])
			{
			value++;
			check = 5;
			}
		}
	}
	return 0;
}

