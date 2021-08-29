#include "lists.h"

/**
 *sum_listint - function that returns the sum of all the data (n)
 *@head: hhead
 *Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *co;

	sum = 0;
	co = head;

	while (co != NULL)
	{
		sum += co->n;
		co = co->next;
	}
	return (sum);
}
