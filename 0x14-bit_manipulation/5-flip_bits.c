#include "main.h"
/**
 * flip_bits - function that returns number of bits you would need to flip
 * @n: input1
 * @m: input2
 *
 * Return: 0
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{

	int l, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (l = 63; l >= 0; l--)
	{
		current = exclusive >> l;
		if (current & 1)
		{
			count++;
		}
	}

	return (count);
}
