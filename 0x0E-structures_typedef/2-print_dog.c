#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Print struct dog
 *@d:Pointer to struct
 * Return: Void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\nAge: %f\nOwner: %s\n",
		       d->name == NULL ? "(nil)" : d->name,
		       d->age,
		       d->owner == NULL ? "(nil)" : d->owner);
	}
}
