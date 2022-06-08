#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * main - Print _putchar
 *
 * Return: 0
 */

int main()
{
	write (2, "_putchar", 8);
	_putchar ('\n');

	return (0);
}
