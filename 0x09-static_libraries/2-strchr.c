#include "main.h"
#include <stdio.h>

/**
 * _strchr - function that locates a string
 * @c: charecter
 * @s: string
 *
 * Return: a pointer to the first occurence of the charecter
 */
char *_strchr(char *s, char c)
{
	int a;

	while (1)
	{

		a = *s++;
		if (a == c)
		{

			return (s - 1);
		}
		if (a == 0)
		{
			return (NULL);
		}
	}
}
