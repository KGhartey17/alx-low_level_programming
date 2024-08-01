#include "lists.h"

/**
 * list_len - prints the number of elements
 * in a linked list_t list
 * @h: the list
 *
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t all = 0;

	while (h !=  NULL)
	{
		all++;
		h = h->next;
	}

	return (all);
}
