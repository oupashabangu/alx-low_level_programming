#include "main.h"

/**
 * swap_int -a function that swaps the values of two integers
 * @a: An input integer pointer
 * @b: An input integer pointer
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;

	*a = *b;

	*b = x;
}
