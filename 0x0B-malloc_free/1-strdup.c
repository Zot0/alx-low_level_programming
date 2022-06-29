#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Create pointer to duplicate string
 * @str: String of characters
 *
 * Return: Pointer or NULL otherwise
 */

char *_strdup(char *str)
{
	char *str2;
	unsigned int a, b;

	if (str == NULL)
	{
		return (NULL);
	}
	for (a = 0; str[a] != '\0'; a++)
		;
	str2 = (char *)malloc(a + 1 * sizeof(char));
	if (str2 == NULL)
	{
		return (NULL);
	}
	for (b = 0; str[b] != '\0'; b++)
	{
	str2[b] = str[b];
	}
	return (str2);
}
