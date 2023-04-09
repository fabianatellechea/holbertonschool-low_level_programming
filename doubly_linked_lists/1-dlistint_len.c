#include "lists.h"
/**
 * dlistint_len - return the number of elements of a linked list
 * @h: pointer
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
