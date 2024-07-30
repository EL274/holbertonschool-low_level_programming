#include "list.h"
/**
 *print_dlistint - Prints all the elements of a doubly linked lists
 *@h: Pointer to the head of doubly linked lists
 *
 *Return: return the number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)

	{
		printf("%d\n", h->n);
		count++;	
		h = h->next;
	}

	return (count);
}
