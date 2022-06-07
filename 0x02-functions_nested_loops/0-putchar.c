#include <stdio.h>

/**
 * main - Prints _putchar followed by new line
 *
 * Return: Always (Success)
 */
int main(void)
{
	char word[7] = "_Putchar"

		int i;

	for (i = 0; i < 7; i++)
	{
		_putchar(word[i]);
	}

	_putchar('\n');

	return (0);
}
