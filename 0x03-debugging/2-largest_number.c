#include "main.h"

/**
 * largest_number - returns the largest of s booksa.
 * @a: first integer
 * @b: second integer
 * @c: third integar
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
int largest;

if (a > b)
{
if (a > c)
{
largest = a;
}
else
{
largest =c;
}
}
else if (b > c)
{
largest = b;
}
else
{
largest = c;
}

return (Largest);
}
