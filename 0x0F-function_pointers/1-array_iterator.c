#include "function_pointers.h"
/**
 * rray_iterator - executes a function passed to it as an argument
 * @array: array to be executed
 * @size: size of the array
 * @action: name of the function pointer
 *
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;
	for (int i = 0; i < size; i++)
		action(array[i]);

}
