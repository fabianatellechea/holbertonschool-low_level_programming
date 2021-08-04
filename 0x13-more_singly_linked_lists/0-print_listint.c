#include "lists.h"
#include <stdio.h>

/**
  *print_listint - function that prints all the elements of a listint_t list.
  *
  *
  */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	if (!h)
	{
		return (i);
	}

		else
		{
			printf("%d\n", h->n);
		}

			return (print_listint(h->next) + 1);
	}


