#inclunde "main.h"

/**
 * _isallpha - Checks for alphabetic characrters
 * @c: character that is checked
 *
 * Return: 0 or 1
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
