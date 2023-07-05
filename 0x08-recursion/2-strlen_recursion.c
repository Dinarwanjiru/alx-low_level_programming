#include "main.h"
/**
* @strlen_recursion- returns length of string
* @ s -the string to check the length
* Return :the length of a string
**/
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1);
	else
		return (0);
}
