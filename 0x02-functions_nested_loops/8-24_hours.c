#include "main.h"
/**
 * jack_bauer - print every minutes starting from 00:00 to 23:59
 * g = hours, j = minutes
 * / 10 allows second digit to rotate
 * Return: 24 hour clock line by line
 */
void jack_bauer(void)
{
	int g, j;

	for (g = 0; g < 24; g++)
	{
		for (j = 0; j < 60; j++)
		{
			_putchar((g / 10) + '0');
			_putchar((g % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');
		}
	}
}
