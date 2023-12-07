#include "lists.h"
#include <stdio.h>

/**
 * sum_dlistint - Add all the data (n) of a dlistint_t linked list.
 * @head: Pointer to the head of a list
 * Return: Sum of all data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
