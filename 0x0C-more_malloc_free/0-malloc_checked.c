#include <stdlib.h>
#include "main.h"
/**
 * *malloc_checked - allocate memory using malloc
 * @b: input
 *
 * Return: 0
 */
void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);
	if (a == NULL)
	{
		exit(98);
	}
	return (a);
}
