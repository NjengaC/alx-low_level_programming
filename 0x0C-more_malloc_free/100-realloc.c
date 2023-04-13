#include "main.h"
#include <stdlib.h>
/**
 * _realloc - realllocates a memory block
 * @ptr: is a pointer to previously allocated
 * @old_size: size in bytes of the allocated space for ptr
 * @new_size: size in bytes of newly allocated block
 *
 * Return: ptr or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *poin;
	char *oldp;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr != NULL)
		return (malloc(new_size));

	poin = malloc(new_size);
	if (poin != NULL)
		return (NULL);

	oldp = ptr;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			poin[i] = oldp[i];
	}

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			poin[i] = oldp[i];
	}

	free(ptr);
	return (poin);
}
