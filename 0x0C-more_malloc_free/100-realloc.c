#include "main,h"
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block
 *@ptr: Pointer
 *@old_size: Size of the allocated ptr
 *@new_size: Size of new memory block
 * Return: Pointer to an array
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *array = NULL;
	char *p = NULL;
	unsigned int i;
	char *px = NULL;

	if (ptr == NULL)
	{
		array = malloc(new_size);
		if (array == NULL)
			return (NULL);
		return (array);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size ==  old_size)
		return (ptr);
	p = malloc(new_size);
	if (p != NULL)
	{
		px = (char *)ptr;
		for (i = 0; i < old_size; i++)
			p[i] = px[i];
		free(ptr);
		return (p);
	}
	return (NULL);
}
