#include "main.h"

/**
 * _memset - Fill memory with a constant byte
 * @s: Pointer of memory area
 * @n: Value of bytes
 * @b: Constant byte
 *
 * Return: Pointer to the memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
