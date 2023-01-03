#include "main.h"

/**
 * _memset - Entry point
 *  @s: pointed destination
 *  @b: constant byte
 *  @n: bytes
 *  Return: Always 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int z;

	for (z = 0; z < n; z++)
	s[z] = b;
	return (s);
}
