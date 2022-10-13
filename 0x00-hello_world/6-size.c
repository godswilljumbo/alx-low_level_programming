#include <stdio.h>

/**
 * main - Entey point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %zu of byte(s)\n", sizeof(char));
	printf("Size of an int: %zu of byte(s)\n", sizeof(int));
	printf("Size of a long int: %zu of byte(s)\n", sizeof(long int));
	printf("Size of a long long: %zu of byte(s)\n", sizeof(long long int));
	printf("Size of a float: %zu of byte(s)\n", sizeof(float));
	return (0);
}
