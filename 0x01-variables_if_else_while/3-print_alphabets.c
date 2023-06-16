#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, and then in uppercase 
 * Return: Always
 */
int main(void)
{
	char small;
	for (small = 'a'; small <= 'z'; small++)
	putchar(small);

	for (small = 'A'; small <= 'Z'; small++)
	putchar(small);
	putchar('\n');
	return (0);
}
