#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elements
 * point: pointer to the list_t list
 *
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (point)
	{
		n++;
		point = point->next;
	}
	return (n);
}
