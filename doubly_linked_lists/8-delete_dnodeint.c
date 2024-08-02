#include "lists.h"
#include <stdio.h>

/**
 * delete_dnodeint_at_index - Deletes the node at a given position.
 * @head: Double pointer to the head of the doubly linked list.
 * @index: Index of the node to be deleted, starting from 0.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *current;
    unsigned int count = 0;

    if (head == NULL || *head == NULL)
        return (-1);

    current = *head;

    if (index == 0)
    {
        *head = current->next;
        if (current->next != NULL)
            current->next->prev = NULL;
        free(current);
        return (1);
    }

    while (current != NULL && count < index)
    {
        current = current->next;
        count++;
    }

    if (current == NULL)
        return (-1);

    if (current->prev != NULL)
        current->prev->next = current->next;
    if (current->next != NULL)
        current->next->prev = current->prev;

    free(current);
    return (1);
}

