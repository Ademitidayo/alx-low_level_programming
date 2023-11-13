#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
 * @head: A pointer to the head of the doubly linked list.
 * @index: The index of the node to retrieve, starting from 0.
 * Return: A pointer to the nth node, or NULL if the node does not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index) 
{
    unsigned int i;
    dlistint_t *current;

    if (head == NULL)
        return NULL;

    current = head;
    for (i = 0; i < index && current != NULL; i++) {
        current = current->next;
    }

    return (i == index && current != NULL) ? current : NULL;
}
