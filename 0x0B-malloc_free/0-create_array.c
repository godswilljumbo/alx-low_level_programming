#include "main.h"
#include <stdlib.h>
/**
 * *create_array - Function
 * @size: the size of the char array
 * @c: default
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
	char *gs = malloc(sizeof(char) * size);

	if (!size || gs == NULL)
		return (NULL);
	while (size--)
		gs[size] = c;
	return (gs);
}
