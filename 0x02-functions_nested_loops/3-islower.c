#include "main.h"

/**
 * islower - function that checks for lowercase character
 *
 * Return: 1 if letter is lowercase, 0 if not the case
 */

int _islower(int c);
{
	if (c >= 'a' && c <= 'z')
	return (1);
	else
	return (0);
}
