#include "main.h"

/**
 * print_alphabet_x10 - Print alphabet 10 times i lowercase
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int c;
	int n;

	for (n = 0; n < 10; n++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar (c);
		}
		_putchar ('\n');
	}
}
