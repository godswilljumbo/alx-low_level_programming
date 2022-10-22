#include "main.h"

/**
 * print_sign - print sign of a number
 * @n: chatacter to check
 * Return: 1 and print "+" if n is greater than zero. Return 0 and print "0" if n is zero. Return -1 and print "-" if n is less than zero.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('-');
		return ('/');
	}
}
