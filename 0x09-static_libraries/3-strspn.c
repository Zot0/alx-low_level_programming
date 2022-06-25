#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: number of bytes
 * @accept: bytes to @s
 *
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int a, b;
	int len = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] != 32)
		{
			for (b = 0; accept[b] != '\0'; b++)
			{
				if (s[a] == accept[b])
				{
					len++;
				}
			}
		}
		else
			return (len);
	}
	return (len);
}
