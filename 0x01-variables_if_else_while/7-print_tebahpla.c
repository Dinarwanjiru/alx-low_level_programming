#include <stdio.h>
/**
 * main - start of code
 *
 * Return: is always false 0
 *
 */
int main(void)
{
	char a;

	for (a = 'z'; a >= 'a' ; a--)
		putchar(a);
	putchar('\n');
	return (0);
}
