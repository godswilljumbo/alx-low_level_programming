#include "lists.h"

/**
 * free_list - function
 * @head: pointer
 */
void free_list(list_t *head)
{
	list_t *don;

	while (head != NULL)
	{
		don = head;
		head = head->next;
		free(don->str);
		free(don);
	}
}
