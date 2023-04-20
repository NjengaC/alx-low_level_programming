#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints anything passed as extra argument
 * @format: list of types of arguments passed to the function
 *
 * Return: (0) always (Success)
 */
void print_all(const char * const format, ...)
{
	const char * const format_copy = format;
	const char *specifier = format_copy;
	char *str = NULL;
	va_list tags;

	double flot = 0.0;
	char character = '\0';
	int integer = 0;

	va_start(tags, format);

	while (*specifier != '\0')
	{
		if (*specifier == 'c')
		{
			character = va_arg(tags, int);
			printf("%c, ", character);
		}
		else if (*specifier == 'i')
		{
			integer = va_arg(tags, int);
			printf("%d, ", integer);
		}
		else if (*specifier == 'f')
		{
			flot = va_arg(tags, double);
			printf("%f, ", flot);
		}
		else if (*specifier == 's')
		{
			str = va_arg(tags, char*);
			if (str == NULL)
				str = "(nil)";

			printf("%s", str);
		}
		specifier++;
	}
		va_end(tags);
		printf("\n");
}
