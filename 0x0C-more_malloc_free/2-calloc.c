#include "main.h"
#include <stdlib.h>

/**
 * _calloc -  Allocates memory for an array
 *@nmemb: Size of the array
 *@size: Size of the type
 * Return: Pointer to an array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array = NULL;
	unsigned int i;
	unsigned int t;
	char *f;

	if (size == 0 || nmemb == 0)
		return (NULL);
	t = nmemb * size;
	array = malloc(t);
	f = (char *)array;
	if (f != NULL)
	{
		for (i = 0; i < t; i++)
			f[i] = 0;
		return (f);
	}
	return (NULL);
}
