#include "main.h"
/**
 * flip_bits - states the number of bit that user flips
 * @n: thhe parameters for flip_bits that is number of flips
 * @m: unsigned long int
 * Return: number of flips
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff, bits = 0;

	diff = n ^ m;

	while (diff > 0)
	{
		bits += (diff & 1);
		diff >>= 1;
	}

	return (bits);
}
