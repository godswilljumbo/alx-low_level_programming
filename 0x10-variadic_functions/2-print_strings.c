#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - function
 * @separator: numbers separator
 * @n: number
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	va_list val;
	unsigned int b;

	va_start(val, n);
	for (b = 0; b < n; b++)
	{
		str = va_arg(val, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if (b < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(val);
}
