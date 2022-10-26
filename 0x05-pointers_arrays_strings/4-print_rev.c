#include "main.h"

/**
 * print_rev - function
 * @s: string to print in reverse
 */

void print_rev(char *s)
{
	int g = 0;

	while (*(s + g) != '\0')
		g += 1;
	g -= 1;
	while (g >= 0)
	{
		_putchar(*(s + g));
		g--;
	}
	_putchar('\n');
}
