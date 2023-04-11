#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - prints the minimum number of coins
 * @argc: number of arrays of argument
 * @argv: arrays of argument
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int cents = atoi(argv[1]);
	int ncoins = 0;
	int i;
	int coinsc;
	int coins[] = {25, 10, 5, 2, 1};

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	if (argc != 1)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 0; i < 5; i++)
	{
		coinsc = cents / coins[i];
		ncoins += coinsc;
		cents -= coinsc * coins[i];
	}
	printf("%d\n", ncoins);

	return (0);
}
