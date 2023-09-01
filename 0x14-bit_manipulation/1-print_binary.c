#include "main.h"
#include <stdio.h>

/**
 * print_binary - print abinary form of a number
 * @n:The first param
 * Return: zero(sucess)
 */

void print_binary(unsigned long int n)
{
int new_param;

static int len;

if (n == 0 && len > 0)
{
return;
}
else if (n == 0)
{
_putchar('0');
return;
}
new_param = (n & 1);
len++;
print_binary(n >>= 1);
_putchar('0' + new_param);
}
