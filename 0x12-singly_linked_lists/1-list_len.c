#include "lists.h"

/**
 * list_len -> finds the number of elements in
 *            a linked list_t list.
 * @h: head node
 *
 * Return: number of elements in h
 */

size_t list_len(const list_t *h)
{
	int elements = 0;

	while (h !NULL)
	{
		elements++;
		h = h->next;
	}

	return (elements);
}
