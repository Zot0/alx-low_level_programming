#include <stddef.h>
#include "main.h"

/**
 * _strstr - locates a substring
 *@haystack: String to search
 *@needle: Bytes to find
 *
 * Return: Pointer to bytes or NULL if nun found
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		if (*haystack != *needle)
		{
			haystack++;
		}
		else
			break;
	}
	if (*haystack == *needle)
	{
		return (haystack);
	}

	return (NULL);
}
