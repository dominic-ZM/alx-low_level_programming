#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at index of dlistint_t linked list
 * @head: head pointer of list to modify
 * @index: position of target node to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr = *head;
	unsigned int counter = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = curr->next;
		if (curr->next != NULL)
			curr->next->prev = NULL;
		free(curr);
		return (1);
	}
	while (curr != NULL && counter < index)
	{
		curr = curr->next;
		counter++;
	}
	if (curr == NULL)
		return (-1);
	if (curr->next != NULL)
		curr->next->prev = curr->prev;
	if (curr->prev != NULL)
		curr->prev->next = curr->next;
	free(curr);
	return (1);
}
