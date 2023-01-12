#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0
 */

char *_strpbrk(char *s, char *accept)
{
	int a, z;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (z = 0; accept[z] != '\0'; z++)
		{
			if (s[a] == accept[z])
			return (s + a);
		}
	}

	return (NULL);
}
