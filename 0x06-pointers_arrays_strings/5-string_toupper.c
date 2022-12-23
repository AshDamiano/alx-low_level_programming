#include "main.h"

/**
 * string_toupper - changes all lower case letters to uppercase
 * @str: the string to be changed
 * Retuen: A pointer to the changed string
 */

char *string_toupper(char *str)

{
	int index = 0;

	while (str[index])
	{
	if (str[index] >= 'a' && str[index] <= 'z')
	str[index] -= 32;
	index++;
	}
	return (str);
}
