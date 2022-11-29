#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index -  inserts a new node at a given position.
 * @head: double pointer to the first node in the list
 * @idx: index of the node to insert
 * @n: value for new node
 *
 * Return: pointer to the indexed node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int g;
	listint_t *old, *new;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		old = *head;
		for (g = 0; g < idx - 1 && old != NULL; g++)
		{
			old = old->next;
		}
		if (old == NULL)
			return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	new->next = old->next;
	old->next = new;
	return (new);
}
