#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * Main - The variable n will store a different value every time you run
 *
 * Description: Complete the source code in order to print the last digit
 *
 * Return: Always (success)
 *
 */

int main(void)

{

	int n, lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdigit = n % 10;

	if  (lastdigit > 5)
	{
	printf("The last digit of %d is %d is greater than 5\n", n, lastdigit);
	}
	else if (lastdigit == 0)
	{
	printf("The last digit of %d is %d and is 0\n", n, lastdigit);
	}
	else if (lastdigit < 6 && lastdigit != 0)
	{
	printf("The last digit of %d is %d and than 6 and not 0\n", n, lastdigit);
	}
	return (0);

}
