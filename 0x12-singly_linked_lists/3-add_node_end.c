#include <string.h>
#include "lists.h"

/**
 * add_node_end -> adds new node at end
 * @head: pointer to head of the list
 * @str: string to add to list
 * Return: address of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i = 0;
	list_t *new, *f;

	while (str[i])
		i++;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = i;
	new->next = NULL;
	if (strdup(str) == NULL)
	{
		free(new);
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	else
	{
		f = *head;
		while (f->next != NULL)
			f = f->next;
		f->next = new;
		return (new);
	}
}
