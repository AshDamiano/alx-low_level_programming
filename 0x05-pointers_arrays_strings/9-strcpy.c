#include "main.h"

/**
 * _strcpy - copy a string
 * @dest: value destination
 * @src: source value
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)

{
	int a;

	for (a = 0; src[a] != '\0'; a++)
	{
	dest[a] = src[a];
	}
	dest[a++] = '\0';
	return (dest);
}
