#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 *
 * @head: a double pointer to the head node
 * @str: a pointer to string
 * Return: he address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	list_t *node = *head;
	unsigned int lenght = 0;

	if (new_node == 0)
		return (NULL);

	while (str[lenght] != '\0')
		lenght++;

	new_node->str = strdup(str);
	new_node->len = lenght;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (node->next != NULL)
	{
		node = node->next;
	}
	node->next = new_node;

	return (new_node);
}
