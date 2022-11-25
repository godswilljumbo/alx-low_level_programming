#include "lists.h"

/**
 * list_len - function
 * @h: pointer
 * Return: node
 */

size_t list_len(const list_t *h)
{
	const list_t *don;
	unsigned int g;

	don = h;
	for (g = 0; don; g++)
		don = don->next;
	return (g);
}
