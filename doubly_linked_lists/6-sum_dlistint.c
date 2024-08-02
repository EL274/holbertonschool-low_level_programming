#include"lists.h"
#include<stdio.h>
/**
 *sum_dlistint - sum of all the data (n) of a dlistint_t linked list.
 *@head: pointer to the head of doubly linked lists
 *
 *Return: returns the sum of all the data (n) of a dlistint_t linked list
 */
int sum_dlistint(dlistint_t *head)
{
	unsigned int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
