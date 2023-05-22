#include <stddef.h>
#include "main.h"
/**
 * binary_to_uint - function that converts a binary number
 * @b: a pointer
 *
 * Return: 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int r = 0;
	int l;

	if (b == NULL)
		return (0);

	for (l = 0; b[l] != '\0'; l++)
	{
		if (b[l] == '0')
			r <<= 1;
		else if (b[l] == '1')
		{
			r <<= 1;
			r |= 1;
		}
		else
			return (0);
	}

	return (r);
}
