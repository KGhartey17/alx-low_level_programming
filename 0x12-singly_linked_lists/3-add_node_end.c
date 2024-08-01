#include "lists.h"

/**
 * add_node_end - adds a new node at the
 * end of a list_t list.
 * @head: pointer to the head of the list_t list
 * @str: string to be added to the list_t list
 *
 * Return: NULL if the function fails.
 * Otherwise, the address of the new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *d;
	int l;
	list_t *new_str, *l_str;

	new_str = malloc(sizeof(list_t));
	if (new_str == NULL)
		return (NULL);

	d = strdup(str);
	if (str == NULL)
	{
		free(new_str);
		return (NULL);
	}

	for (l = 0; str[l];)
		l++;

	new_str->str = d;
	new_str->len = l;
	new_str->next = NULL;

	if (*head == NULL)
		*head = new_str;
	else
	{
		l_str = *head;
		while (l_str->next != NULL)
			l_str = l_str->next;
		l_str->next = new_str;
	}

	return (*head);
}
