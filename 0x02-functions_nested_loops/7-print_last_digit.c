#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @abc: number's last result
 * Return: value of the last digit
 */
int print_last_digit(int abc)
{
	int bbc;

	bbc = (abc % 10);

	if (bbc < 0)
	{
		bbc = (-1 * bbc);
	}
	_putchar(bbc + '0');
	return (bbc);
}
