#include <stdlib.h>
#include "main.h"
/**
 * *string_nconcat - function that concatenates two strings
 * @n: input
 * @s1: first string
 * @s2: second string
 *
 * Return: 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *x;
	unsigned int a = 0, b = 0, i, j;

	if (s1 == NULL)
	{
		s1 = '\0';
	}
	if (s2 == NULL)
	{
		s2 = '\0';
	}
	while (s1[a] != '\0')
	{
		a++;
	}
	while (s2[b] != '\0')
	{
		b++;
	}
	if (n >= b)
	{
		n = b;
		x = malloc((a + b + 1) * sizeof(char));
	}
	if (x == NULL)
	{
		return (0);
	}
	for (i = 0; i < a; i++)
	{
		x[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		x[a] = s2[j];
	}
	x[a++] = '\0';

	return (x);
}
