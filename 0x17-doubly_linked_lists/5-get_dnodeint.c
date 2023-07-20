#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 *
 * @head: a pointer to the head of the list
 * @index: the index of the node, starting from 0
 * Return: the nth node, or NULL if doesn't exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *temp;

	temp = head;

	if (head == NULL)
		return (NULL);

	while (temp != NULL)
	{
		if (count == index)
			break;
		temp = temp->next;
		count++;
	}
	return (temp);
}
