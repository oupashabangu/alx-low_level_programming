#include <stdlib>
#include "main.h"

/**
 * **alloc_grid - function returns pointer to two dimentional
 * @width: width
 * @height: height
 *
 * Return: NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i;
	int j;

	if (height <= 0 || width <= 0)
		return (NULL);

	arr = (int **) malloc(sizeof(int *) * height);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr[i] = (int *) malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			free(arr);
			for (j = 0; j <= 0; j++)
				free(arr[j]);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}

	return (arr);
}


