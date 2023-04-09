#include "lists.h"
#include <stdio.h>
/**
 * print_dlistint - print all elements of a dlistint
 * @h: pointer
 * Return: i
 */

size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
