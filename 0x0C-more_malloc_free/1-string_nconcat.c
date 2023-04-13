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
	unsigned int a = 0, b = 0, i;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[a] != '\0')
	{
		a++;
	}
	while (s2[b] != '\0')
	{
		b++;
	}
	if (n > b)
	n = b;
	x = malloc((a + n + i) * sizeof(char));

	if (x == NULL)
	{
		return (0);
	}
	for (i = 0; i < a; i++)
	{
		x[i] = a(i);
	}
	for (i < (a + n); i++)
	{
		x[i] = b(i - );
	}
	x[i] = '\0';

	return (x);
}
