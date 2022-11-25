#include "lists.h"
#include <stdio.h>
/**
 * print_list - function
 * @h: pointer
 * Return: number of node
 */

size_t print_list(const list_t *h)
{
	unsigned int g;
	const list_t *don;

	don = h;
	for (g = 0; don != NULL; g++)
	{
		if (don->str == NULL)
			printf("[0] (nil)");
		else
			printf("[%d] %s\n", don->len, don->str);
		don = don->next;
		g++;
	}
	return (g);
}
