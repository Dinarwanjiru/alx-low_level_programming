#include "lists.h"
/**
 *  sum_listint -finds sum of the elements in a linked list
 *  @head :pointer to the first node in a linked list
 *  Return :the sum of elements in a linked list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}

