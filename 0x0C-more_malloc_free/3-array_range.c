#include <stdlib.h>
#include "main.h"
/**
 * *array_range - create an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: 0
 */
int *array_range(int min, int max)
{
	int *ptr;
	int a = 0;

	if (min > max)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
	{
		return (0);
	}
	while (min <= max)
	{
		ptr[a] = min;
		min++;
		a++;
	}
	return (ptr);
}
