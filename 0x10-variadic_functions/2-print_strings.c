#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - function prints a string
 * @separator: sepatator between strings
 * @n: number of strings
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	if (separator == NULL)
		separator = "";
	for (i = 0; i < n; i++)
	{
		char *string = va_arg(args, char *);

		if (string == NULL)
			string = "(nil)";
		printf("%s", string);
		if (n != i + 1)
			printf("%s", separator);
	}
	printf("\n");
}

