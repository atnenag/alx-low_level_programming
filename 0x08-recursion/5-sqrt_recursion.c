#include "main.h"

/**
 * _sqrt  - the function that finds the square root of a given value.
 * @low: lower than sqrt value.
 * @high: higher than sqrt value
 * Return: square root(sqrt).
 */
int _sqrt(int low, int high)
{
	if (low > high)
	{
		return (-1);
	}
	else if (low * low == high)
	{
		return (low);
	}

	return (_sqrt(low + 1, high));
}
