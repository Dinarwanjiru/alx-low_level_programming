#include "lists.h"
/**
 * get_nodeint_at_index - returna the node at index
 * @head: pointer to the first node in the linked list
 * @index: position of node to return
 * Return: pointer to node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	while (head != NULL && i < index)
	{
		i++;
		head = head->next;
	}
	return (head);
}

