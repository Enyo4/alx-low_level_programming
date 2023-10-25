#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint_end - Adds a new node at the end of the list.
 * @head: A pointer to the pointer to the head of the list
 * @n: Value to be added to the new node
 *
 * Return: The address of the new element or NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	/* The new node will be the last node, so its 'next' is NULL*/
	new_node->next = NULL;

	if (*head == NULL)
	{
		/* If the list is empty, the new node becomes the head*/
		*head = new_node;
	}
	else
	{
		/* Transverse the list to find the last node */
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		/* Set the 'next' of the current last node to the new node */
		temp->next = new_node;
	}

	return (new_node);
}
