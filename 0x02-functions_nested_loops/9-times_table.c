#include "main.h"
/**
 * times_table - print 9 times table
 */
void times_table(void)
{
	int g, o, d;

	for (g = 0; g < 10; g++)
	{
		for (o = 0; o < 10; o++)
		{
			d = o * g;
			if (o == 0)
			{
				_putchar(d + '0');
			}
			if (d < 10 && o != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(d + '0');
			}
			else if (d >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((d / 10) + '0');
				_putchar((d % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
