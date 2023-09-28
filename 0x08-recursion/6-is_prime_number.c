#include "main.h"

int temp_prime_num(int n, int j);

/**
 * is_prime_number -check if an integer is a prime number or not
 * @n: num to evaluate
 *
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * temp_prime_num - calculates if a number is prime using recursion
 * @n: num to evaluate
 * @j: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */
int temp_prime_num(int n, int j)
{
	if (j == 1)
		return (1);
	if (n % i == 0 && j > 0)
		return (0);
	return (temp_prime_num(n, j - 1));
}
