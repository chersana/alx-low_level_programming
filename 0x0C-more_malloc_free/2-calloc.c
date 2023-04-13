#include <stdlib.h>
#include "main.h"
/**
 * *_calloc - function that allocates memory for an array
 * @size: size of array
 * @nmemb: bytes of array
 *
 * Return: 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int c = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	a = malloc(nmemb * size);
	if (a == NULL)
	{
		return (NULL);
	}
	while (c < nmemb * size)
	{
		a[c] = 0;
		c++;
	}
	return (a);

}
