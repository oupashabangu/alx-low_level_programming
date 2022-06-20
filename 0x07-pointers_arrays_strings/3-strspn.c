#include "main.h"

/**
 * _strspn - function that get length of a prefix substring
 * @s: initial segment
 * @accept: list of charecters
 *
 * Return: number of bytes in the initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int f;
	int flag;

	f = 0;

	for (i = 0; accept[j] != '\0'; j++)
	{
		if (s[i] == accept[j])
		{
			f++;
			flag = 1;
		}
	}
	if (flag == 0)
	{
		return (f);
	}

	return (0);
}
