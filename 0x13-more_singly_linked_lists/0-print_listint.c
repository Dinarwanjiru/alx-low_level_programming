#include <stdio.h>
#include "lists.h"
/**
 * print_listint prints all the elements in linked list
 * @h -pointer tothe first node
 * return -number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodecount = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nodecount++;
		h = h->next;
	}
	return (nodecount);
}



