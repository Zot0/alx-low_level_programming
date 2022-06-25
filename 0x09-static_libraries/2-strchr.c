#include <stddef.h>
#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: String of characters
 * @c: Character to be found
 *
 * Return: Pointer to c or NULL if no character
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s != c)
		{
			s++;
		}
		else
			break;
	}
	if (*s == c)
	{
		return (s);
	}

	return (NULL);
}
