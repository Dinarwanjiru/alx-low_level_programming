#include "lists.h"
/**
 * free_listint - free linked list
 * @head: pointer to first node of a linked list that is being freed
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
