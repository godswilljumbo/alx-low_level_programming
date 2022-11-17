#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - function
 * @separator: numbers separator
 * @n: number
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int nu;
	va_list val;
	unsigned int b;

	va_start(val, n);
	for (b = 0; b < n; b++)
	{
		nu = va_arg(val, int);
		printf("%d", nu);
		if (b < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(val);
}
