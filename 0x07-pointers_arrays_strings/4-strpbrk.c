#include <stddef.h>
#include "main.h"

/**
 * _strpbrk - Search a string for set of bytes
 *@s: String to search
 *@accept: Bytes to find
 *
 * Return: Pointer to bytes or NULL if nun found
 */

char *_strpbrk(char *s, char *accept)
{
	int a = 0;
	
	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
