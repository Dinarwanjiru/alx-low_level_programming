#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -print if the last digit is greater than 5 ,is 0 and is less than
 *6 and not 0 
 * Return: Always 0
 */
int main(void)
{
	int n, lastd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastd = n % 10;
	if (lastd > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, lastd);
	}
	else if (n == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n ,lastd);
	}
	else if (n < 6 && != 0)
	{ 
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastd);
	}
	return (0);
}
