#include "function_pointers.h"
/**
 * print_name - calls a function that prints out to stdout
 * @name: string to print
 * @f: pointer to a funtion
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
