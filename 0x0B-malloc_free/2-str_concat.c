#include "main.h"
#include <stdlib.h>
/**
 * *str_concat - concatenate two strings
 * @s1: input
 * @s2: input
 *
 * Return: 0
 */
char *str_concat(char *s1, char *s2)
{
	char *a;
	unsigned int i = 0, j = 0, x = 0, y = 0;

	while (s1 && s1[x])
		x++;
	while (s2 && s2[y])
		y++;

	a = malloc(sizeof(char) * (x + y + 1));
	if (a == NULL)
		return (NULL);

	i = 0;
	j = 0;

	if (s1)
	{
		while (i < x)
		{
			a[i] = s1[i];
			i++;
		}
	}

	if (s2)
	{
		while (i < (x + y))
		{
			a[i] = s2[j];
			i++;
			j++;
		}
	}
	a[i] = '\0';

	return (a);
}
