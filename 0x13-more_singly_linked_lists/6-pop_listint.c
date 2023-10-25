#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * pop_listint - Deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n).
 * @head: A pointer to a pointer to the head of the list
 *
 * Return: The head of the node's data or 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n = 0;

	if (head == NULL || *head == NULL)
		return (0);

	temp = *head;
	n = temp->n;
	*head = temp->next;

	free(temp);

	return (n);
}
