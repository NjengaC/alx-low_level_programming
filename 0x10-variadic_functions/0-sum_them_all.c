#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all its parametrs
 * @n: number of parameters
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, i;
	va_list args;

	va_start(args, n);

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		sum += va_arg(args, int);

	va_end(args);
	return (sum);
}

