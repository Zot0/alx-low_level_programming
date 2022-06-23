#include "main.h"

/**
 * _strlen_recursion - Returns lenght of string
 * @s: String characters
 *
 * Return: Length of @s
 */

int _strlen_recursion(char *s)
{
	int len;

	if (*s == '\0')
	{
		return;
	}
	len = _strlen_recursion(s + 1) + 1;

	return (len);
}
