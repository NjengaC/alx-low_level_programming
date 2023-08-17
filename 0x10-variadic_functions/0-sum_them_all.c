#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - prints the sum of all its arguments
 * @n: number of arguments
 *
 * Return: sum of all arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	int j, sum = 0;
	unsigned int i;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);
	
	for (i = 0; i < n; i++)
	{
		j = va_arg(args ,int);
		sum += j;
	}

	va_end(args);

	return (sum);
}
