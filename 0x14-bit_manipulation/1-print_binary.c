#include "main.h"

/**
 * print_binary - function with one argument
 * @n: decimal value
 *
 * Description: prints the binary representation of a number
 * Return: na
 */
void print_binary(unsigned long int n)
{
	unsigned long soty = n;

	if (soty > 1)
	{
		print_binary(soty >> 1);
	}
	_putchar((soty & 1) + '0');
}
