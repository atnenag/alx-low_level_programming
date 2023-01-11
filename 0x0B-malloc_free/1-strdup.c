#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_strdup- a function which duplicate of the string
 *@str: checked
 *
 *Return: returns a pointer to a new string
 */

char *_strdup(char *str)
{
	char *duplicate;

	int i, len = 0;


	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;

	duplicate = malloc(sizeof(char) * (len + 1));

	if (duplicate == NULL)

		return (NULL);
	for (i = 0; str[i]; i++)
		duplicate[i] = str[i];

	duplicate[len] = '\0';

	return (duplicate);
}
