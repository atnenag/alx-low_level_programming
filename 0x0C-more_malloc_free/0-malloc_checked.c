#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: is the size memory to be allocated
 * Return: pointer to allocated memory or
 * 98 if the function fails
 */

void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);

}
