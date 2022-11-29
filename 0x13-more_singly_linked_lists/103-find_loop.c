#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: pointer to the beginning of the list
 *
 * Return: address of the node where the loop starts or NULL if there's no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *spa, *aps;

	spa = aps = head;
	while (spa && aps && aps->next)
	{
		spa = spa->next;
		aps = aps->next->next;
		if (spa == aps)
		{
			spa = head;
			break;
		}
	}
	if (!spa || !aps || !aps->next)
		return (NULL);
	while (spa != aps)
	{
		spa = spa->next;
		aps = aps->next;
	}
	return (aps);
}
