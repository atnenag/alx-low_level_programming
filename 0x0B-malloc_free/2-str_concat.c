#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *str_concat- a function that concatenates two strings.
 *
 *@s1: The string to be concated up on
 *@s2: The string to be conacated to
 *Return: if NULL is passed, treat as empty string
 * The function should return NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;

	int i, concat_i = 0, len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)

		len++;

	concat = malloc(sizeof(char) * len);

	if (concat == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		concat[concat_i++] = s1[i];
	for (i = 0; s2[i]; i++)
		concat[concat_i++] = s2[i];

	return (concat);
}
