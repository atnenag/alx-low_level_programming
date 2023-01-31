#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_strings - a function that prints strings
 *
 * @separator: - the string to be printed between the strings
 * @n: - no of arguments in function
 *
 * Return: void
 * If separator is NULL, don’t print it
 * If one of the string is NULL, print (nil) instead
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *sep, *string;
	unsigned int i;
	va_list arg_list;

	if (separator == NULL || *separator == 0)
		sep = "";
	else
		sep = (char *) separator;
	va_start(arg_list, n);

	if (n > 0)
		printf("%s", va_arg(arg_list, char *));
	for (i = 1; i < n; i++)
	{
		string = va_arg(arg_list, char*);
		if (string == NULL)
			string = "(nil)";
		printf("%s%s", sep, string);
	}
	printf("\n");
	va_end(arg_list);
}
