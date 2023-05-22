#include "main.h"
#include <stdio.h>
/**
 * print_binary - function that prints  binary representation of  number
 * @n: input
 */
void print_binary(unsigned long int n)
{
	int b_count = sizeof(unsigned long int) * 8 - 1;
	unsigned long int m = 1UL << b_count;

	while (!(n & m) && b_count > 0)
	{
	m >>= 1;
	b_count--;
	}

	for (; b_count >= 0; b_count--)
	{
	putchar((n & m) ? '1' : '0');
	m >>= 1;
	}
}
