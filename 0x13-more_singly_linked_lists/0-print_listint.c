#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to the first node of the list
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 1;

	if (h == NULL)
		return (0);
	while (h->next != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count = count + 1;
	}
	printf("%d\n", h->n);
	return (count);
}
