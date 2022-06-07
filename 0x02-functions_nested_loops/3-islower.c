#include "main.h"

/**
 * _islower - function to check for lower case charector
 *
 * @c: is the int that will use for argument of the function
 *
 * Return: 1 if true, 0 if false
 */
int_islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
