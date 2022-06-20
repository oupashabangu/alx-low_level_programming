#include "main.h"
#include <stdio.h>

/**
 * print_diagsum - function that prints the sum of two diagonals
 * @a: integer array
 * @size: size of array
 *
 * Return: void
 */
void print_diagsum(int *a, int size)
{
	int x;

	sum1 = 0;
	sum2 = 0;

	for (x = 0; x < size; x++)
	{
		sum1 += a[(size + 1) * x];
		sum2 += a[(size - 1) * (x + 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}
