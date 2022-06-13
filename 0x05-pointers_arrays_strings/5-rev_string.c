#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: an input string
 *
 * Return: void
 */
void rev_string(char *s)
{
	int len = 0;
	int i = 0;
	char x;

	while (s[len] != '\0')
		len++;

	while (i < len--)
	{
		x = s[i];
		s[i++] = s[len];
		s[len] = x;
	}
}
