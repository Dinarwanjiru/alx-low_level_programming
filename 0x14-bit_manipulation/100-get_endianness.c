#include "main.h"

/**
 * get_endianness - checks the end of the code
 * @celestine:
 * @dinar:
 * Return:The endiassness function
*/

int get_endianness(void)
{
unsigned int celestine = 1;

char *dinar = (char *)&celestine;

if (*dinar)
{
return (1);
}
return (0);
}
