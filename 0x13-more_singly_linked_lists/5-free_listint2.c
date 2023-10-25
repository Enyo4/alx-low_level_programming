#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint2 - Frees a listint_t list
 * @head: pointer to a pointer that points to the head of a list
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *next;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		next = *head;
		*head = (*head)->next;
		free(next);
	}
}

