#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Print a name
 * @name: String
 * @f: Funtion pointer
 *
 * Return: Void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);

}
