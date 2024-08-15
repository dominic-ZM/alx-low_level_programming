#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: the head pointer of the list to free
 *
 * Return: none
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
