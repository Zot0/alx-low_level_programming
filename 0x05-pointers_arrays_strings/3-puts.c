#include <unistd.h>
#include "main.h"

/**
 * _puts - print string to stdout
 * @str: string to be printed
 *
 * Return: Void
 */

void _puts(char *str)
{
	write(1, &*str, 64);
	_putchar('\n');
}
