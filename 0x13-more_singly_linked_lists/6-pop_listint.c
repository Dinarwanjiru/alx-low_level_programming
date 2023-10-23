#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to the firt node
 * Return: the head node’s data
 */

int pop_listint(listint_t **head)
{
	int hold;
	listint_t *ptr = *head;

	ptr = malloc(sizeof(listint_t));
	if ((*head) == NULL)
		return (0);
	hold = (*head)->n;
	*head = (*head)->next;
	free(ptr);
	ptr = NULL;
	return (hold);
}
