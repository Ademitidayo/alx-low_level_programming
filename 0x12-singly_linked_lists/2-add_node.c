#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @point: double pointer to the list_t list
 * @x: new string to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (x[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->x = strdup(x);
	new->len = len;
	new->next = (*point);
	(*point) = new;

	return (*point);
}
