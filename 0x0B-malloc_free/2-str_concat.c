#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 * @s1: String characters
 * @s2: String characters
 *
 * Return: Pointer or NULL otherwise
 */

char *str_concat(char *s1, char *s2)
{
	char *strnew = NULL;
	unsigned int i;
	int a;
	int b;
	int count;

	count = 0;
	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";
	for (a = 0; s1[a] != '\0'; a++)
	;
	for (b = 0; s2[b] != '\0'; b++)
	;
	strnew = (char *)malloc((a + b + 1) * sizeof(char));
	if (strnew == NULL)
	{
	return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	strnew[i] = s1[i];
	for (; s2[count] != '\0'; i++)
	{
		strnew[i] = s2[count];
		count++;
	}
	return (strnew);
}
