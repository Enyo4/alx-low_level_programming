#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_dnodeint - Adds a new node to the beginning of a double linkedlist
 * @head: a double pointer to the head of a list
 * @n: Value to be added to the new list
 * Return: Address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}
	*head = new_node;

	return (new_node);
}
