#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 *print_numbers - prints numbers, followed by a new line.
 *@n: number of integers passed to the function
 *@separator: string to be printed btn numbers
 *
 *Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	unsigned int num;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(list, unsigned int);
		printf("%d", num);
		if (i < (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(list);
}
