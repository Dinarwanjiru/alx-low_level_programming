#include "lists.h"
/**
 * free_listint2 - free the linkrd list and sets the head to NULL
 * @head : pointer to the first node in a linked list
 */
void free_listint2(listint_t **head)
{
	
	listint_t *temp;

	if (head == NULL)
	return;

	while (head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
	
