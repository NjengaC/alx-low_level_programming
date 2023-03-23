#include "main.h"

/**
*void print_numbers - Writes a function that prints the numbers, from 0-9 
*return always (0) Success
*/
void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
