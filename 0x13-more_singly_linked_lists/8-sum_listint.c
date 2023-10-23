#include "lists.h"
/**
 * sum_listint - find sum of elements in a linked list
 * @head:pointer to first node in  linkedlist
 * Return: sum of elements in linked list
 */

int sum_listint(listint_t *head)
{
	int i = 0;

	while (head != NULL)
	{
		i = i + head->n;
		head = head->next;
	}
	return (i);
}
