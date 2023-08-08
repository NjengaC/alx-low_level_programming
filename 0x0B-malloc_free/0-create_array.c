#include "main.h"
#include <stdlib.h>
/**
 * create_array - a function that creates an array of chars,
 * and initialises it with a specific char
 * @size: is the size in bytes of memory
 * @c: character array name
 *
 * Return: NULL if size is 0 otherwise pointer to the array success
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
return (str);
}
