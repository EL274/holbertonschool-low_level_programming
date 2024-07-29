#include "lists.h"
#include<string.h>
/**
 *add_node_end- adds node at the end of the list_t list
 *@head: pointer of head of the list_t list
 *@string: the string we add at the end of the list_t list
 *
 *
 *Return: return the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (str == NULL)

	dup = strdup(str);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;
	new->str = dup;
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		last = *head;
		while (last->next != NULL);
		last = last->next;
	}
	return (*head);
}

