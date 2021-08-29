#include "lists.h"

/**
 *free_listint - free a listint_t
 *@head: head
 *Return: 0
 */
void free_listint(listint_t *head)
{
	listint_t *h;

	while (head != NULL)
	{
		h = head;
		head = head->next;
		free(h);
	}
}
