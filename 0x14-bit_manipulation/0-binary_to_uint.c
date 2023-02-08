#include <stdio.h>
#include "main.h"
unsigned int binary_to_uint(const char *b);
/**
 * binary_to_uint - a function that convert decimal to binary
 * @b: is a pointer for constant char
 * Return: converted decimal
 * Return 0: is any none 0 or 1 chars or if b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;

	if (!b)
		return (0);
	for (int i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		decimal = decimal * 2 + (b[i] - '0');
	}
	return (decimal);
}
