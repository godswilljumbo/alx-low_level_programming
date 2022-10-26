#include "main.h"

/**
 * puts_half - function
 * @str: string
 */

void puts_half(char *str)
{
	int g = 0;
	int j = 0;

	while (str[g] != 0)
		g += 1;
	j = g / 2;
	if (g % 2 == 1)
		j += 1;
	while (str[j] != '\0')
	{
		_putchar(*(str + j));
		j++;
	}
	_putchar('\n');
}
