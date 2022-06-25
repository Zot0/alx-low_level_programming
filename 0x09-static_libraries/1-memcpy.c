#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: Pointer memory area is copied too
 * @src: Pointer memory area is copied from
 * @n: Value of byes copied
 *
 * Return: poiter to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
