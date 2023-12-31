#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - uses recursion to return the length of a string
 * @s: string to find the length
 *
 * Return: 0
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
