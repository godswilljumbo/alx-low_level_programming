#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_
#include <stdarg.h>
/**
 * struct print - function
 * @g: data type
 * @j: function
 */

typedef struct print
{
	char *g;
	void (*j)(va_list);
} print_t;

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);

#endif
