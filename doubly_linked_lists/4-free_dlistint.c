#include <stdio.h>
#include "lists.h"
/**
 *free_dlistint - Frees a dlistint list
 *@head:pointer to the head of the doubly linked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head->next; 
		free(head);
		head = tmp;
	}
}
