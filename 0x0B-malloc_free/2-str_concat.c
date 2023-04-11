#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: new if memory block to new is created else NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *new;
	int i = 0;
	int j = 0;
	int l = 0;
	int r = 0;

	while (!s1[i] == '\0')
	{
		i++;
	}
	while (!s2[j] == '\0')
	{
		j++;
	}

	new = malloc(sizeof(char) * (i + j + 1));

		if (new == NULL)
			return (NULL);

	while (s1[l] != '\0')
	{
		new[l] = s1[l];
		l++;
	}

	while (s2[r] != '\0')
	{
		new[l] = s2[r];
		r++, l++;
	}

	/*new[l + 1] = '\0';*/
	return (new);
	}
