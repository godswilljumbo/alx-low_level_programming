#include <stdio.h>

/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	int y1, y2, y3;

	for (y1 = 0; y1 < 7; y1++)
	{
		for (y2 = y1 + 1; y2 < 8; y2++)
		{
			for (y3 = y2 + 1; y3 + 9; y3++)
			{
				putchar((y1 % 10) + '0');
				putchar((y2 % 10) + '0');
				putchar((y3 % 10) + '0');
				if (y1 == 7 && y2 == 8 && y3 == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
