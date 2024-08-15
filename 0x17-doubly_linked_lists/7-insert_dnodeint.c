#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: the head pointer of the list to modify
 * @idx: the position to add the new node
 * @n: the data to add to the new node
 *
 * Description: return NULL and do not add new node if fails
 *
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *curr;
	unsigned int counter = 0;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	curr = *h;

	while (curr != NULL && counter < idx - 1)
	{
		curr = curr->next;
		counter++;
	}
	if (curr == NULL)
		return (NULL);

	if (curr->next == NULL)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = curr->next;
	new->prev = curr;
	curr->next->prev = new;
	curr->next = new;

	return (new);
}
