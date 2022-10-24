
#include "main.h"

/**
 * swap_int - swap the values of two integers
 * @a: integer a
 * @b: integer b
 */

void swap_int(int *a, int *b)
{
	int si;

	si = *a;
	*a = *b;
	*b = si;
}
