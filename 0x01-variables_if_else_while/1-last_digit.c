#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - The variable n will store a different value every time you run
 *
 * Description: Complete the source code in order to print the last digit
 *
 * Return: Always (success)
 *
 */

int main(void)

{

	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("last digit of %d is ",n);
	ld = n % 10;
	if (ld > 5);
	{
	printf("%d and is greater than 5\n", ld);
	}
	else if ((ld < 6) && (ld < 0))
	{
	printf("%d and is less than 6 and not 0\n", ld);
	}
	else
	{
	printf("%d and is 0\n", ld);
	}
	return (0);

}
