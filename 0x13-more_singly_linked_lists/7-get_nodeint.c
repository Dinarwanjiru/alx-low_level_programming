#include "lists.h"
/**
 * get_nodeint_at_index -  get node at *index nth from a linked list
 * @head :pointer to the first node in the linked list
 * @index :position of node to return
 * Return :pointer to node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t l = 0;
	listint_t *temp = head;

	while (temp && l < index)
	{
	temp = temp->next;
	l++;
	}

	return (temp ? temp : NULL);
}
