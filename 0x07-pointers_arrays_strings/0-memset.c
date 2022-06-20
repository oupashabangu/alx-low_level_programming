#include "main.h"

/**
 * _memset - functions that fill the first n bytes
 * @n: number of bytes
 * @s: memory area
 * @b: constant byte
 *
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
