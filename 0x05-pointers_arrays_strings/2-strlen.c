#include "main.h"

/**
 * _strlen - determine the length of string
 * @s: String to be returned
 *
 * Return: void
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
