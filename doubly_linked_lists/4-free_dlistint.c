#include "lists.h"
#include <stdlib.h>

/**
 *free_dlistint - free a listint_t
 *@head: pointer
 *Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
