#include "main.h"

/**
 * _strlen - function that return length of a string
 * @s: an input string
 *
 * Return: void
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}
