#include "dog.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_dog - a function that prints a struct dog
 * @d: pointer to the struct dog
 *
 * Return: void
 * nil: if If an element of d is NULL
 * nothing: If d is NULL print nothing.
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");
		printf("Age: %f\n", d->age);
		if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nil)\n");
	}
}
