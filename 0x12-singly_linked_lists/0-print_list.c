#include "lists.h"

/**
 * print_list - function
 * @h: pointer
 * Return: number of node
 */

size_t print_list(const list_t *h)
{
	unsigned long int nod = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		nod++;
	}
	return (nod);
}
