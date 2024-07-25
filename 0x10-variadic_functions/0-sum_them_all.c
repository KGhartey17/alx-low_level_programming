#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - adds all its parameters.
 * @n: the count of all the remaining arguments.
 *
 * Return: 0 if @n == 0
 * otherwise return the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list all;
	unsigned int i, total = 0;

	va_start(all, n);

	for (i = 0; i < n; i++)
		total += va_arg(all, int);

	va_end(all);
	return (total);
}
