#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint - adds a new node at the beginning of a linked list
 * @head: pointer
 * @n: int
 * Return: the address of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (!new)
	{
		return (NULL);
	}

	new->n = n;
	new->next = *head;

	if (*head)
	{
		(*head)->prev = new;
	}

	*head = new;

	return (new);
}
