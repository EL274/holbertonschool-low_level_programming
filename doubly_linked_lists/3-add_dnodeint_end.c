#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @head: pointer to the head of the doubly linked list.
 * @n: integer to insert in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *new, *temp;

    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
    return (NULL);

    new->n = n;
    new->next = NULL;

    if (*head == NULL)
    {
        new->prev = NULL;
        *head = new;
         return (new);
    }

    temp = *head;
    while (temp->next != NULL)
    temp = temp->next;

    temp->next = new;
    new->prev = temp;

    return (new);
}

