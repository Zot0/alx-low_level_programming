#include "main.h"

/**
 * swap_int - Swaps the value of two integer
 * @a: Value of integer
 * @b: Value of integer
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
