#include "main.h"

/**
 * print_last_digit - Print last digit of a number
 * @n: Value of digits
 *
 * Return: Always 0
 */

int print_last_digit(int n)
{
	_putchar ((n %  10) + '0');

	return (n % 10);
}
