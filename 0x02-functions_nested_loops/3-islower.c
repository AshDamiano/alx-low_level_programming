#include "main.h"

/**
 * islower - checks for lowercase character
 * @c: the character
 * Return: 1 if letter is lowercase, 0 if not the case
 */

int _islower(int c)
		
{
	if (c >= 'a' && c <= 'z')
	return (1);
	else
	return (0);
}
