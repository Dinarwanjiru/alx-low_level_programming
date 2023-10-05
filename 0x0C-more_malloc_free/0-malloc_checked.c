#include "main.h"
#include <stdlib.h>

/**
 *malloc_checked - allocates memory using malloc
 *@b: number of bytes to allocate
 *
 *Return: pointer to alloc mem
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
