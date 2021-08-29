#include "lists.h"
#include <stdlib.h>

/**
  *add_nodeint_end - function that adds a new node at the end
  *@head: h
  *@n: n
  *Return: the address of the new element, or NULL if it failed
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = (listint_t *) malloc(sizeof(listint_t));
	listint_t *end = *head;

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
		(*head) = new;
	else
	{
		while (end->next != NULL)
			end = end->next;
		end->next = new;
	}
	return (new);
}
