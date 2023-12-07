#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - Gets the nth node of a dlistint_t linked list.
 * @head: Pointer to a double linked list
 * @index: The position of the lvalue
 * Return: The nth node value
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n = 0;

	while (n != index && head != NULL)
	{
		head = head->next;
		n++;
	}
	return (head);
}
