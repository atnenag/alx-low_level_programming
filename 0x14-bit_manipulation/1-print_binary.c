#include <stdio.h>
#include "main.h"
void print_binary(unsigned long int n);
/**
 * print_binary - a function that convert binary to decimal
 * @n: decimal number
 * Return: converted binary number
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	putchar((n & 1) + '0');
}
