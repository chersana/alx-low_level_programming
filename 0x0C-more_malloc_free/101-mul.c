#include <stdlib.h>
#include <stdio.h>
/**
  * _isdigit - program that multiplies two positive number
  * @argv: a pointer
  *
  * Return: 0
  */
int _isdigit(char *argv)
{
	int a;

	a = 0;
	while (argv[a])
	{
		if (argv[a] >= '0' && argv[a] <= '9')
			a++;
		else
			return (1);
	}
	return (0);
}
/**
  * _strlen - converts
  * @s: pointer
  *
  * Return: the length
  */
int _strlen(char *s)
{
	int a, result;

	a = result = 0;
	while (s[a])
	{
		if (s[a] >= '0' && s[a] <= '9')
		{
			result *= 10;
			result += (s[a] - '0');
		}
		a++;
	}
	return (result);
}
/**
  * main - main function
  * @argc: size of array of arguments
  * @argv: number of array of arguments
  *
  * Return: return 0 on success, 98 on failure
  */
int main(int argc, char *argv[])
{
	int a;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (a = 1; a < argc; a++)
	{
		if (_isdigit(argv[a]))
		{
			printf("Error\n");
			exit(98);
		}
	}
	return (0);
}
