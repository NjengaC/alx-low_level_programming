#include "main.h"
/**_memset -fill a block of memory with a specific value @s: sttarting address of memory to be filled
 * @b is the desired value.
 * @n is the number of bytes to be changed.
 *
 *returns a pointer to the memory area @*s.
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
