#include "search_algos.h"
/**
 * advanced_binary - searches for a given value in a sorted array of integers
 * using advanced binary search algorithm
 * @array: the array
 * @size: size of the array
 * @value: value to find
 * Return: the first index where value is located or -1 if not found
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t L, R, mid, i, result = -1;

	if (array == NULL || size == 0)
		return (-1);
	L = 0;
	R = size - 1;

	while (L <= R)
	{
		printf("Searching in array: ");
		for (i = L; i <= R; i++)
		{
			printf("%d", array[i]);
			if (i != R)
				printf(", ");
		}
		printf("\n");

		mid = (L + R) / 2;
		if (array[mid] == value)
		{
			result = mid;
			R = mid - 1;
		}
		else if (array[mid] < value)
			L = mid + 1;
		else
			R = mid - 1;
	}
	return (result);
}

