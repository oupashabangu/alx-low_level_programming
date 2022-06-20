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
	int i;

	unsigned int sum1;
	unsigned int sum2;

	sum1 = 0;
	sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[(size * i) + i];
		sum2 += a[(size * (i + 1)) - (i + 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}

