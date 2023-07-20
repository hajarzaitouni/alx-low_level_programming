#include "lists.h"

/**
 * sum_dlistint - computes the sum of all the data (n) of a dlistint_t list
 *
 * @head: a pointer to the head of the list
 * Return: the sum of all n
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum = 0;

	temp = head;
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
