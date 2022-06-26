#include "main.h"
#include <stdio.h>

/**
 * _strstr - function that locates a substring
 * @needle: substring
 * @haystack: string
 *
 * Return: A pointer to the beginning of located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int x;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (x = 0; needle[x] != '\0'; x++)
		{
			if (haystack[i + x] != needle[x])
				break;
		}
		if (!needle[x])
			return (&haystack[i]);
	}

	return (NULL);
}
