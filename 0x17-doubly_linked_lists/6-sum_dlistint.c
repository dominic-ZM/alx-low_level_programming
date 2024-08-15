#include "lists.h"

/**
 * sum_dlistint - returns sum of all data (n) of a dlistint_t linked list
 * @head: head pointer of the list to sum
 *
 * Return:  sum of all the data (n) or 0 if list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum;

	if (head == NULL)
		return (0);

	sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

