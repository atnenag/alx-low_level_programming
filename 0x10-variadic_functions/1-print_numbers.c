#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_numbers - prints the values in function
 *
 * @separator: - separates values between numbers
 * @n: - no of arguments in function
 *
 * Return: void
 * If separator is NULL, don’t print it
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	char *sep;
	unsigned int i;
	va_list arg_list;

	if (separator == NULL || *separator == 0)
		sep = "";
	else
		sep = (char *) separator;
	va_start(arg_list, n);

	if (n > 0)
		printf("%d", va_arg(arg_list, int));
	for (i = 1; i < n; i++)
		printf("%s%d", sep, va_arg(arg_list, int));
	printf("\n");
	va_end(arg_list);
}
