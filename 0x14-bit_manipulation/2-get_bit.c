#include "main.h"

/**
 * get_bit - return the value of a bit within the given index
 * @n: parameter
 * @index: The index
 * Return: return bit(sucess)
 */
int get_bit(unsigned long int n, unsigned int index)
{
int bit;
unsigned int param_size;

param_size = (sizeof(unsigned long int) * 8);
if (index >= param_size)
return (-1);
bit = ((n >> index) & 1);
return (bit);
}
