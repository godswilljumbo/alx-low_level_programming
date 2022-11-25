#include <stdio.h>

void print_before_main(void) __attribute__ ((constructor));

/**
 * main - print things before main
 */
void print_before_main(void)
{
	printf("You're beat! and yet, you must allow, I bore my house upon my back!\n");
}
