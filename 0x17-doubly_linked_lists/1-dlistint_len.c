#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * dlistint_len - Gets the number of elements in a linked dlistint_t list.
 * @h: Pointer to the head of the list
 *
 * Return: The number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
