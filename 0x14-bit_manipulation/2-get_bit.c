#include "main.h"
/**
 * get_bit - function that returns the value of a bit
 * @n: input
 * @index: the index of the bit to get
 *
 * Return: 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int k;

	if (index > 63)
	{
		return (-1);
	}
	k = (n >> index) & 1;

	return (k);
}
