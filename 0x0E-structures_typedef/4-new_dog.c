#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - a function that creates a new dog.
 * @name: name member of the dog
 * @age: age member of the dog
 * @owner: owner member of the dog
 *
 * Return: pointer to the new dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *newdog_name;
	char *newdog_owner;
	dog_t *newdog_newdog;

	newdog_name = malloc(sizeof(*name) * (strlen(name) + 1));
	newdog_owner = malloc(sizeof(*owner) * (strlen(owner) + 1));
	newdog_newdog = malloc(sizeof(dog_t));

	if (newdog_name && newdog_owner && newdog_newdog)
	{
		strcpy(newdog_name, name);
		strcpy(newdog_owner, owner);
		newdog_newdog->name = newdog_name;
		newdog_newdog->age = age;
		newdog_newdog->owner = newdog_owner;
	}
	else
	{
		free(newdog_name);
		free(newdog_owner);
		free(newdog_newdog);
		return (NULL);
	}
	return (newdog_newdog);
}
