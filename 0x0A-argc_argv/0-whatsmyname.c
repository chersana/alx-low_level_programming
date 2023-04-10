#include <stdio.h>
#include "main.h"
/**
 * main - print the new name
 * @argc: number of arrays of argument
 * @argv: arrays of argument
 *
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
