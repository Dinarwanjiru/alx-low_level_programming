/**
 * _strpbrk - a function that searches a string for any of a set of byte
 *
 * @s: pointer to input string
 * @accept: pointer to string we searching for in @s
 *
 * Return: pointer to the bytes in @s or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i, k;

	i = 0;
	while (s[i] != '\0')
	{
		k = 0;
		while (accept[k] != '\0')
		{
			if (s[i] == accept[k])
				return (s + i);
			k++;
		}
		i++;
	}
	return ('\0');
}
