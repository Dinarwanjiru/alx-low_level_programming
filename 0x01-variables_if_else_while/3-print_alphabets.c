#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, and then in uppercase 
 * Return: Always
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z' ; a++)
		putchar(a);
	for (a = 'A'; a <= 'Z'; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
