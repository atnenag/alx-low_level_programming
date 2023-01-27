#include "dog.h"
#include <stddef.h>

/**
* init_dog - a function that initialize a variable of type struct dog
* type dog
* @d: dog identification
* @name: name of dog
* @age: age of dog
* @owner: owner name
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
