#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint - Freea a list
 * @head: List to free
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head; /* Save the current node */
		head = head->next; /* Move head to the next node */
		free(current); /* Free the saved node */
	}
}
