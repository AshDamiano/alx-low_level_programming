#include <stdio.h>

/**
 * _strlen - Returns the length of a string
 * @str: Gets the length
 * Return: The length of @str.
 */

int _strlen(char *str)

{
	size_t length = 0;

	while (*str++)

	length++;
	return (length);
}
