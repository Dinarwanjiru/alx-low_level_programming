#include <stdio.h>
/**
 * main - prints the alphabet in lowercase without q and e
 * Return:Always
 */
int main(void)
{
	char low, e, q;
	e = 'e';
	q = 'q';
	for (low ='a'; low <= 'z'; low ++)
	if (low != e && low != q)
	{
	putchar(low);
	}
	putchar('\n');
	return (0);
}
