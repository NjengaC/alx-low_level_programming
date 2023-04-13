#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: smmallest integer
 * @max: largest integer
 *
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int i;
	int *ray;

	if (min > max)
		return (NULL);
	ray = malloc(sizeof(int) * (max - min + 1));
	if (ray == NULL)
		return (NULL);
	for (i = 0; i <= max; i++)
	{
		ray[i] = min;
		min++;
	}
	return (ray);
}
