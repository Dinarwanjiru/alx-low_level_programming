#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 *_strdup - duplicate string
 *@str: string to duplicate
 *Return: pointer to array
 */
char *_strdup(char *str)
{
	char *dup;
	int size = 0;
	int i = 0;

	if (str == NULL)
		return (NULL);
	while (str[size] != '\0')
		size++;
	dup = malloc(sizeof(char) * (size + 1));

	if (dup == NULL)
		return (NULL);
	while (i < size)
	{
		dup[i] = str[i];
		i++;
	}
	dup[size] = '\0';
	return (dup);
}
