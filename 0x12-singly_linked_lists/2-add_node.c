#include "lists.h"

/**
 * add_node -  adds a new node at the beginning of a list_t list
 *
 * @head: double pointer to the head node
 * @str: a pointer to string
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int lenght = 0;

	new_node = malloc(sizeof(list_t));

	if (new_node == 0)
		return (NULL);

	while (str[lenght] != '\0')
		lenght++;

	new_node->str = strdup(str);
	new_node->len = lenght;
	new_node->next = (*head);
	*head = new_node;

	return (new_node);
}
