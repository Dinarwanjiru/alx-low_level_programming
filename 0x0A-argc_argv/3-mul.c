#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - multiplies two numbers.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */
int main(int argc, char **argv)
{
	int a, b, calc;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	calc = a * b;

	printf("%i\n", calc);

	return (0);
}
