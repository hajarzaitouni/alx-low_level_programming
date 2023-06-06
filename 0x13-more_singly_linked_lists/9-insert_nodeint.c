#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 *
 * @head: a pointer to the head of list
 * @idx: is the index of the list where the new node should be added
 * @n: integer parameter
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *temp;
	unsigned int i = 0;

	newNode = malloc(sizeof(listint_t));

	newNode->n = n;
	newNode->next = NULL;

	temp = *head;
	if (idx == 0)
	{
		newNode->next = (*head);
		(*head) = newNode;
		return (newNode);
	}

	while (temp != NULL && i < idx)
	{
		if (i == idx - 1)
		{
			newNode->next = temp->next;
			temp->next = newNode;
			return (newNode);
		}
		i++;
		temp = temp->next;
	}

	return (NULL);
}
