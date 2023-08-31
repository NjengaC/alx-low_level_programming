#include "main.h"

/**
 * convert_binary - prints the binary representation of a number.
 * @n: number to print in binary
 * Return: a string of binary characters
 */
void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int current;

	for (i = 63; i >= 0; i--)
	{
		current = n >> i;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
		{
			_putchar('0');
			count++;
		}
	}
	if (!count)
	{
		_putchar('0');
		count++;
	}
	_putchar('\0');
}
