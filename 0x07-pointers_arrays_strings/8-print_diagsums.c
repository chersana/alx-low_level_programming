#include "main.h"
/**
 * print_diagsums - function that prints the sum of the two diagonals
 *@a: memory area
 *@size: input
 *
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
	int x = 0, y = 0, i;

	for (i = 0; i < size; i++)
	{
		x = x + a[i * size + i];
	}
	for (i = size - 1; i >= 0; i--)
	{
		y += a[i * size + (size - i - 1)];
	}
	printf("%d, %d\n", x, y);
}
