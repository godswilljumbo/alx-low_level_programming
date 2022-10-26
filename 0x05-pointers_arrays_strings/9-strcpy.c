#include "main.h"

/**
 * *_strcpy - function
 * @src: string
 * @dest:pointer to buffer
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int g, tim;

	tim = 0;

	while (src[tim] != '\0')
	{
		tim++;
	}
	for (g = 0; g < tim; g++)
	{
		dest[g] = src[g];
	}
	dest[g] = '\0';
	return (dest);
}
