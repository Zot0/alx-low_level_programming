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
	int a;
	int b = 0;

	while (needle[b] != '\0')
	{
		b++;
	}
	while (*haystack)
	{
		for (a = 0; needle[a]; a++)
		{
			if (haystack[a] != needle[a])
			{
				break;
			}
		}
		if (a != b)
		{
			haystack++;
		}
		else
			return (haystack);
	}

	return (NULL);
}
