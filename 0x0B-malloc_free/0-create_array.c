#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *create_array- creates an array of chars, and initializes it with char
 *@c: checked
 *@size: size of the array (n)
 *Return: NULL if size = 0, NULL if it fails,else array
 */

char *create_array(unsigned int size, char c)
{
	char *array;

	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)

		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
