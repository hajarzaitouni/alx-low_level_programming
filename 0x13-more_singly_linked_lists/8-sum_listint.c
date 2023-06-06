#include "lists.h"

/**
 * sum_listint - computes the sum of all the data (n) of the linked list
 *
 * @head: a pointer to the head of the list
 * Return: the sum of all the data n
 */

int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	temp = head;
	while (temp != NULL)
	{
		sum = sum + (temp->n);
		temp = temp->next;
	}

	return (sum);
}
