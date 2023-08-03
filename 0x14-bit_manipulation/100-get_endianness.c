#include "main.h"

/**
 * get_endianness - checks if multibyte data is the endianness.
 * Return: If big-endian - 0, if little-endian -1.
 */
int get_endianness(void)
{
	unsigned int a = 1;
	char *b = (char *)&a;

	if (*b)
		return (1);
	else
		return (0);
}
