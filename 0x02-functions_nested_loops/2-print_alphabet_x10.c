#include "main.h"

/**
 * print_alphabet_x10 - print a-z ten times in new line
 * Return: x10 a-z
 */
void print_alphabet_x10(void)
{
	char ab, me;

	me = 0;

	while (me < 10)
	{
		for (ab = 'a'; ab <= 'z'; ab++)
		{
			_putchar(ab);
		}
		me++;
		_putchar('\n');
	}
}
