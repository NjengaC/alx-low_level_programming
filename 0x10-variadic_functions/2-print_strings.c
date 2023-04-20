#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints string passed as arguments to a function
 * @separator: string to print between strings
 * @n: number of strintg passed as arguments
 *
 * Return: (0) Always (Success)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list agts;

	va_start(agts, n);

	if (separator == NULL)
		separator = "";
	for (i = 0; i < n; i++)
	{
		char *str = va_arg(agts, char*);

		if (str == NULL)
			str = "(nil)";
		printf("%s", str);

		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
}
