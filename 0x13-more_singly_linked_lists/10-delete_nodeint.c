#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a the list
 *
 * @head: a double pointer to the head of the list
 * @index: the index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *p;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	temp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (i < index - 1)
	{
		if (temp == NULL || temp->next == NULL)
			return (-1);
		temp = temp->next;
		i++;
	}

	p = temp->next;
	temp->next = temp->next->next;
	free(p);
	return (1);
}
