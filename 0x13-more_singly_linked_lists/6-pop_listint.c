#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 *
 * @head: a double pointer to the head of the list
 * Return: the head node’s data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (head == NULL || *head == 0)
		return (0);
	n = (*head)->n;
	temp = (*head)->next;
	free(*head);
	(*head) = temp;

	return (n);
}
