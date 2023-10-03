#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 *str_concat- concatinates 2 strings
 *@s2: string 2
 *@s1: string 1
 *Return: pointer to array
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	char *p;
	int j = 0;

	if (s1 == NULL)
		s1 = ("");

	if (s2 == NULL)
		s2 = ("");
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	p = malloc(sizeof(char) * (i + j + 1));

	if (p == 0)
		return (NULL);
	i = j = 0;
	while (s1[i] != '\0')
	{
		p[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		p[i] = s2[j];
		i++;
		j++;
	}
	p[i] = '\0';
	return (p);
}

