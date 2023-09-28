#include <stdio.h>
#include "main.h"

int _find_sqrt(int n, int j);

/**
 * _sqrt_recursion - returns the natural square root of a number sing recursion
 * @n: number to calculate the square root
 *
 * Return: sqrt of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_find_sqrt(n, 1));
}

/**
 * _find_sqrt - searches for the natural squareroot of a number
 * @n: num to calculate the square root of
 * @j: the iterator
 *
 * Return: sqrt
 */
int _find_sqrt(int n, int j)
{
	if (j * j > n)
	{
		return (-1);
	}
	if (j * j == n)
	{
		return (j);
	}
	return (_find_sqrt(n, j + 1));
}
