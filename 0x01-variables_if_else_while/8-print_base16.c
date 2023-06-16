#include <stdio.h>
/**
 * main -  print all the numbers of base 16 in lowercase
 * Return:Always
 */
int main(void)
{
	int x;
	char low;
	for (x = '0'; x <= '9'; x++)
	putchar(x);

	for (low = 'a'; low <= 'f'; low++)
	putchar(low);
	putchar('\n');
	return (0);
}


