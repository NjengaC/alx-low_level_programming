#include "main.h"
/**_memset -fill a block of memory with a specific value @s: sttarting address of memory to be filled
 * @s is the starting address of mem to be filled.
 * @b is the desired value.
 * @n is the number of bytes to be changed.
 *
 * Return a pointer to te memory area @s
 *
 */
char *_memset(char*s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
