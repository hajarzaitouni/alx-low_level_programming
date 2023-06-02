#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 *
 * @h: a pointer to the first node
 * Return: the number of elements in list's
 */

size_t list_len(const list_t *h)
{
	size_t n_elemts = 0;

	while (h != NULL)
	{
		h = h->next;
		n_elemts++;
	}

	return (n_elemts);
}
