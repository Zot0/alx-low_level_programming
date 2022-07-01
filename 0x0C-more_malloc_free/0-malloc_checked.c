#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc
 * @b: String character
 * Return: Pointer to the allocate memory
 */

void *malloc_checked(unsigned int b)
{
	void *a = NULL;

	a = malloc(b);
	if (a == NULL)
	{
		exit(98);
	}
	return (a);
}
