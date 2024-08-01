#include "lists.h"

/**
 * add_node - Adds a new node at the
 * beginning of a list_t list.
 * @head: pointer to the head of the list_t list
 * @str: string to be added to the list_t list
 *
 * Return: NULL if the function fails.
 * Otherwise - the address of the new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	char *d;
	int l;
	list_t *new_str;

	new_str = malloc(sizeof(list_t));
	if (new_str == NULL)
		return (NULL);

	d = strdup(str);
	if (d == NULL)
	{
		free(new_str);
		return (NULL);
	}

	for (l = 0; str[l];)
		l++;

	new_str->str = d;
	new_str->len = l;
	new_str->next = *head;

	*head = new_str;

	return (new_str);
}
