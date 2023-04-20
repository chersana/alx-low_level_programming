#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - a function that executes a function
 * @array: a pointer
 * @size: size of the array
 * @action: a pointer to function
 *
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;

	if (array == NULL || action == NULL)
		return;
	for (j = 0; j < size; j++)
	{
		action(array[j]);
	}
}
