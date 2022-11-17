#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function
 * @n: number
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int b;
	va_list val;

	if (n == 0)
		return (0);
	va_start(val, n);
	for (b = 0; b < n; b++)
		sum += va_arg(val, int);
	va_end(val);
	return (sum);
}
