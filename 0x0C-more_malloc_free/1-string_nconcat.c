#include "main.h"
#include <stdlib.h>

/**
 *string_nconcat - concatenates two strings
 *@s1: destination string
 *@s2: source string
 *@n: number of bytes to concatenate to s1
 *
 *Return: pointer to newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *dest;
	unsigned int len = 0;
	unsigned int len2 = 0;
	unsigned int i = 0;
	unsigned int j = 0;

	if (s1 == NULL)
	{
		s1 = ("");
	}
	if (s2 == NULL)
	{
		s2 = ("");
	}
	while (s1[len] != '\0')
	{
		len++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	if (n < len2)
	{
		len2 = n;
	}
	
	dest = malloc(sizeof(char) * (len + len2 + 1));
	if (dest == NULL)
	{
		return (NULL);
	}
	while ( i < len)
	{
		dest[i] = s1[i];
		i++;
	}
	while (j < len2)
	{
		dest[i] = s2[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
