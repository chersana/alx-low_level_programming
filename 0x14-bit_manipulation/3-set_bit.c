#include <stdio.h>
#include "main.h"
/**
 * set_bit - function that sets the value of a bit to 1
 * @n: input
 * @index: index of the the bit to set
 *
 * Return: 0
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
	return (-1);
	}
	*n |= (1UL << index);
	return (1);
}
