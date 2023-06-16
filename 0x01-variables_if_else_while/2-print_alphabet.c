#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 * Return: Always
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
