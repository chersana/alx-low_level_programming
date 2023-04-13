#include <stdlib.h>
#include "main.h"
/**
 * *_realloc - function that reallocates a memory block using malloc and free
 * @new_size: input
 * @old_size: input
 * @ptr: pointer to memory
 *
 * Return: 0
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *x;

	if (new_size > old_size)
	{
		x = malloc(new_size);
		free(ptr);
		return (x);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		x = malloc(new_size);
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
