#include <stdio.h>
#include "dog.h"

/**
 * init_dog - Initialize a variable of type struct dog
 *@d: Pointer to struct
 *@name: Name type char
 *@age: Age type float
 *@owner: Name of owner type char
 * Return: Void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
