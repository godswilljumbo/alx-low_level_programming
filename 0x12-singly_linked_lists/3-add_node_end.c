#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - finds length of string
 * @str: string
 * Return: length of string
 */

unsigned int _strlen(char *str)
{
	unsigned int g;
	
	for (g = 0; str[g]; g++)
		;
	return (g);
}

/**
 * add_node_end - function
 * @head: pointer
 * @str: string
 * Return: address of new elememt or NULL if fail
 */

list_t *add_node_end(list_t **head, const char *str)
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

