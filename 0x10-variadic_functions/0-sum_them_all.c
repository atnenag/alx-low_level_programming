#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - va_arg macros that sum up all arguments
 *
 * @n: no of arguments in function
 *
 * Return: sum of arguments
 * If n == 0, return 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0; /* intiate the sum as 0. */
	va_list arg_list; /* the list of arguments to be itrated*/

	va_start(arg_list, n); /*Start iterating arguments with a va_list*/
	for (i = 0; i < n; i++)
		sum += va_arg(arg_list, int);

	va_end(arg_list); /*end va_args*/
	return (sum);
}
