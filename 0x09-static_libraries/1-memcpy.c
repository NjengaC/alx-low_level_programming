#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: destination on memory copy
 * @src: source of memory copy
 * @n: number of bytes engaged
 *
 * Return: copied memory with n bytes engaged
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
