#include "main.h"

/**
 * factorial - is the fanction that return the factorial of given no n
 * @n: integer
 * Return: factorial value of n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
