#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to head first node
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	int count = 1;

	if (h == NULL)
		return (0);
	if (h->next != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;
			count++;
		}
	}
	printf("[%d] %s\n", h->len, h->str);
	return (count);
}
