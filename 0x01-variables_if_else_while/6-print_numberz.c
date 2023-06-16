#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10 starting from 0
 * Returns: Always
 */
int main(void)
{
	int numz;
	for (numz = '0'; numz <='9'; numz++)
	putchar(numz);
	putchar('\n'); 
	return (0);
}
