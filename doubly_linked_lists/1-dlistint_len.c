#include"list.h"
#include<stdio.h>
/**
 *dlistint_len - returns the number of elements in a linked
 *@h: pointer to  the head of the doubly linked
 *
 *Return:returns the number of nodes in the list 
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while(h != NULL)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
