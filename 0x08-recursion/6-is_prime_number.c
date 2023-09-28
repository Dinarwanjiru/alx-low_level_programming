#include <stdio.h>
#include "main.h"

int temp_prime_num(int n, int j);

/**
 * is_prime_number - returns 1 if the input integer is a
 * prime number, otherwise return 0
 * @n: number to be evaluated
 *
 * Return: 1 if num is prime and 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (temp_prime_num(n, n - 1));

}

/**
 * temp_prime_num - calculates if a num is prime using recursion
 * @n: num to evaluate
 * @j: the iterator
 *
 * Return: 0
 */
int temp_prime_num(int n, int j)
{
	if (j == 1)
	{
		return (1);
	}
	if (n % j == 0 && j > 0)
	{
		return (0);
	}
	return (temp_prime_num(n, j - 1));
}
