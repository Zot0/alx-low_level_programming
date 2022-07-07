#include "function_pointers.h"

/**
 * print_name - Print a name
 * @name: String
 * @f: Funtion pointer
 *
 * Return: Void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
