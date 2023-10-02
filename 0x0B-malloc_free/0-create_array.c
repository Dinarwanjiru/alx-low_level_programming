#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 *create_array - creates an array of chars
 *and initializes it with a specific char
 *@size: the size of the memory to print
 *@c:initializes array
 *Return:pointer to array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *p;

	if (size == 0)
		return (NULL);
	p = malloc(sizeof(char) * size);

	if (p == NULL)
		return (NULL);
	while (i < size)
	{
		p[i] = c;
		i++;
	}
	return (p);
}
