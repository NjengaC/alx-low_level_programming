#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything passed as argument
 * @format: list
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *separator = "";

	va_list tags;

	va_start(tags, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(tags, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(tags, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(tags, double));
					break;
				case 's':
					str = va_arg(tags, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", separator, str);
					break;
				default:
					i++;
					continue;
			}
			separator = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(tags);
}
