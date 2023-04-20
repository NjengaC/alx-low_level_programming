#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: string to insert between numbers
 * @n: number of integers
 *
 * Return: (0) always (success)
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list agmts;
	unsigned int i;

	va_start(agmts, n);

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		int nums = va_arg(agmts, int);

		printf("%d", nums);
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(agmts);
}
