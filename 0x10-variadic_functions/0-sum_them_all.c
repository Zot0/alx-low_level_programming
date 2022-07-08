#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all -  Returns the sum of parameters
 * @n: Num of args
 * Return: Always 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int sum;
	unsigned int i;

	sum = 0;
	va_start(valist, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		sum += va_arg(valist, unsigned int);
	va_end(valist);
	return (sum);
}
