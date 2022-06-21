#include "main.h"

/**
 * _memcpy - copies memoru area
 * @dest: W
 * @rc:
 * @n:
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
