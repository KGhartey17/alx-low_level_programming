#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: the list to be printed.
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t all = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		all++;
		h = h->next;
	}
	return (all);
}
