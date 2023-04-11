#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - product of two numbers
 * @argc: number of arrays of argument
 * @argv: arrays of argument
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, j, p;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	j = atoi(argv[2]);
	p = i * j;
	printf("%d\n", p);

	return (0);
}
