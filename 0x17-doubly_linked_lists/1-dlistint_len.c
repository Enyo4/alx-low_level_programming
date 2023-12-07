#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * dlistint_len - Returns the number of elements in a linked list
 * @h: Pointer to a double lined list
 *
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
