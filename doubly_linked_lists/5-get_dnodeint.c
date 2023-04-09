#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of a linked list
 * @head: pointer
 * @index: position
 * Return: node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	for (; head; i++)
	{
		if (i == index)
		{
			return (head);
		}

		head = head->next;
	}
	return (NULL);
}
