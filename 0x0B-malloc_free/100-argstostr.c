#include "main.h"
#include <stdlib.h>
/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int i, j;
	int a = 0;
	int e = 0;
	char *arr;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			e++;
	}
	e += ac;

	arr = malloc(sizeof(char) * e + 1);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			arr[a] = av[i][j];
			a++;
		}
		if (arr[a] == '\0')
		{
			arr[a++] = '\n';
		}
	}
	return (arr);
}
