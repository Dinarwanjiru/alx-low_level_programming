#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates arguments in a program
 * @ac: argument count
 * @av: argument vector
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int j, m, r = 0, l = 0;
	char *stn;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (j = 0; j < ac; j++)
	{
		for (m = 0; av[j][m]; m++)
			l++;
	}
	l += ac;

	stn = malloc(sizeof(char) * l + 1);
	if (stn == NULL)
		return (NULL);
	for (j = 0; j < ac; j++)
	{
	for (m = 0; av[j][m]; m++)
	{
		stn[r] = av[j][m];
		r++;
	}
	if (stn[r] == '\0')
	{
		stn[r++] = '\n';
	}
	}
	return (stn);
}
