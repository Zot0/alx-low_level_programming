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
	unsigned int b;

	if (str == NULL)
	{
		return (NULL);
	}
	str2 = (char *)malloc(sizeof(char));
	if (str2 == NULL)
	{
		return (NULL);
	}
	for (b = 0; str[b] != '\0'; b++)
	{
	str2[b] = str[b];
	}
	str2[b] = '\0';
	return (str2);
}
