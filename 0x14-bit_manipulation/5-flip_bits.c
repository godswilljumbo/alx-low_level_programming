#include "main.h"

/**
 * flip_bits - number of different bits between two numbers
 * @n: first number
 * @m: second number
 *
 * Return: number of bits you would need to flip
 * to get from one number to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int dif, see;
	unsigned int new, g;

	new = 0;
	see = 1;
	dif = n ^ m;
	for (g = 0; g < (sizeof(unsigned long int) * 8); g++)
	{
		if (see == (dif & see))
			new++;
		see <<= 1;
	}
	return (new);
}
