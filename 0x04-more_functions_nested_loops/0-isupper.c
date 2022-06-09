#include "main.h"

/**
 * _isupper - check the code.
 *@c: character for arguement
 * Return: 1 or 0.
 */
int _isupper(int c);
{
	int c;

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	return (0);
}
