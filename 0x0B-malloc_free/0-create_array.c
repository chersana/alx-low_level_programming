#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * *create_array - creating an array of a chars
 * @c: initial of a character
 * @size: size of of bytes
 *
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
	char *s = malloc(size);

	if (size == 0 || s == 0)
		return (NULL);
	while (size--)
		s[size] = c;
	return (s);

}
