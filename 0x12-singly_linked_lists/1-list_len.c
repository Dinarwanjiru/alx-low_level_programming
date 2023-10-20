#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pojnter to head first node
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t count = 1;

	if (h == NULL)
		return (0);
	while (h->next)
	{
		h = h->next;
		count++;
	}
	return (count);
}
