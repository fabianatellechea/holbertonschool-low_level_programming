#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - add a new node at the end of a list
 * @head: first pointer
 * @n: content of new node
 * Return: content in order
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *temp;

	new = malloc(sizeof(dlistint_t));

	if (!new)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if (!*head)
	{
		new->prev = NULL;
		*head = new;
	}

	else
	{
		temp = *head;

		while (temp->next)
		{
			temp = temp->next;
		}
		temp->next = new;
		new->prev = temp;
	}
	return (new);
}
