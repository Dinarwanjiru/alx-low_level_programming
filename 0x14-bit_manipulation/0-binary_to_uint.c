#include "main.h"

/**
 * binary_to_uint- convert binary to unsigned int
 * @b: binary
 * Return: the unsigned int
 */
unsigned int binary_to_uint(const char *b)
	{
	unsigned int uint, pos;
	int j;

	if (!b)
		return (0);

	for (j = 0; b[j]; j++)
		;
	j--;
	for (pos = 1, uint = 0; j >= 0; j--)
	{
		if (b[j] == '0')
		{
			pos *= 2;
			continue;
		}
		else if (b[j] == '1')
		{
			uint += pos;
			pos *= 2;
			continue;
		}
		return (0);
	}
	return (uint);
}
