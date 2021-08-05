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
	listint_t *nodo = NULL;

	*nodo = malloc(sizeof(listint_t));


	if (!nodo)
	{
		return (NULL);

	}

	while (nodo->next)
	{
		nodo = nodo->next;
		head->next = nodo;
	}
	return (&head);
}
