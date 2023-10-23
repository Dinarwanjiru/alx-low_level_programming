#include "lists.h"
/**
 * add_nodeint - adds new node in the beginning of a linked list
 * @head:pointer that points to first node in the linked list
 * @n:new data that is inserted when node is created
 * Return: pointer to new node or to return n NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	if (!ptr)
		return (NULL);
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (*head);
}
