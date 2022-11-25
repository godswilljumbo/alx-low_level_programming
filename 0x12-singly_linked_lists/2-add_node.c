#include "lists.h"

/**
 * add_node - function
 * @head: pointer
 * @str: string
 * Return: address of new elememt or NULL if fail
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *don = *head;
	list_t *add;
	unsigned int len = 0;

	while (str[len])
		len++;
	add = malloc(sizeof(list_t));
	if(!add)
		return (NULL);
	add->str = strdup(str);
	add->len = len;
	add->next = NULL;
	if (*head == NULL)
	{
		*head = add;
		return (add);
	}
	while (don->next)
		don = don->next;
	don->next = add;
	return (add);
}

