#include "lists.h"

/**
  *listint_len - function that returns the number of elements
  *@h: h
  *Return:  the number of elements in a linked listint_t list
  */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	if (!h)
	{
		return (i);
	}

		return (listint_len(h->next) + 1);
}
