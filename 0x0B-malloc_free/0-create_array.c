#include <stdlib.h>
#include "main.h"

/**
 * create_array - Create an array and initializes with specific char
 * @size: Size of array
 * @c: Character
 *
 * Return: Pointer to arrray or Null otherwise
 */

char *create_array(unsigned int size, char c)
{
	char (*ptr);
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = (char *)malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
