#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - function that searches a string for any set of bytes
 * @s: string
 * @accept: byte string
 *
 * Return: pointer to byte
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; *s != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}

