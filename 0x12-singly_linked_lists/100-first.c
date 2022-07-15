#include <stdio.h>
#include "lists.h"

/**
 * calledFirst - Print elements before main
 *
 * Return: Void
 */
void __attribute__((constructor)) calledFirst()
{

	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
