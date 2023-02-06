#include <stdio.h>
#include <stdlib.h>

/**
  * array_iterator - function that executes another function as parameter
  * @array: - element of an array
  * @size: - the size of the array
  * @action: - pointer to the function you need to use
  *
  * Return - no return
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL)
		return;
	if (action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
