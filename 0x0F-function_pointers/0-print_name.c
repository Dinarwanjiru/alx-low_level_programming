#include <stdio.h>
/**
 * print_name - prints a name
 * @name: name of the person
 * @f: a pointer function
 * return - no return cause void is declared
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	f(name);
}
