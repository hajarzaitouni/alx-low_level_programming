#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 *
 * @head: a pointer to the head of the list
 * @index: index of the node
 * Return: returns the nth node of the list and NULL if the node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i = 0;

	temp = head;
	while (temp != NULL && i < index)
	{
		temp = temp->next;
		i++;
	}

	if (temp != NULL)
		return (temp);
	else
		return (NULL);
}
