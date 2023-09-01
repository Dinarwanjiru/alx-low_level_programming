#include "main.h"

/**
*clear_bit - function that set the value to 1
*@n:The first elem
*@index:The elem index
*Return: return 1 for success or -1 for failure
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
int elem_index = (index >= sizeof(unsigned long int) * 8);

if (elem_index)
return (-1);
*n &= ~(1 << index);
return (1);
}
