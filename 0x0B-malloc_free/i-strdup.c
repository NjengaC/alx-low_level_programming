#include "main.h"
/**
 * _strdup - return a pointer to a new string which is a duplicate
 * of string str
 * @str: string in memory
 *
 * Return: pointer to a new string or NULL if str is NULL
 */
char *_strdup(char *str)
{
char *dup;
int i = 0;
int j = 0;

if (str == NULL)
	return (NULL);

while (str[i] != '\0')
	i++;
dup = malloc(sizeof(char) * (i + 1));

if (dup == NULL)
	return (NULL);
for (; str[j]; j++)
	dup[j] = str[j];
return (dup);
}
