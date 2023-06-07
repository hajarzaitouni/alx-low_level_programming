#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 *
 * @head: a double pointer to the head of list
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *current, *prev, *next;

	current = next = *head;
	prev = NULL;

	while (next != NULL)
	{
		next = next->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head = prev;

	return (*head);
}
