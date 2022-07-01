#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates array of integers
 * @min: min values
 * @max: max values
 *
 * Return: pointer to newly created array
 */
int *array_range(int min, int max)
{
	int r, x;
	int *a;

	if (min > max)
		return (NULL);
	x = max - min + 1;
	a = malloc(sizeof(int) * 1);
	if (a == NULL)
		return (NULL);
	for (r = 0; r < x; r++, min++)
	{
		a[r] = min;
	}
	return (a);
}
