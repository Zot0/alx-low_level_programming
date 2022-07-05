#ifndef DOG_H
#define DOG_H

/**
*struct dog - Initialize struct dog
*@name: Name of dog type char
*@age: Age type float
*@owner: Name of owner type char
*
*Description: name, age and owner of a dog
*/

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

#endif /* DOG_H */
