#include "main.h"

/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int x, z, value, check;

	value  = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
	check = 0;
	for (z = 0; accept[z] != '\0'; z++)
		{
		if (accept[z] == s[x])
			{
			value++;
			check = 4;
			}
		}
	}
}
