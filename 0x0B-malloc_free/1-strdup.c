#include <stdlib.h>
#include "main.h"
/**
 * *_strdup - return a pointer to a newly allocated space in memory
 * @str: a string
 *
 * Return: 0
 */
char *_strdup(char *str)
{
	char *d;
	unsigned int i = 0, j = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
		d = malloc(sizeof(char) * (i + 1));
		if (d == NULL)
		{
			return (NULL);
		}
	}
	for (j = 0; str[j]; j++)
	{
		d[j] = str[j];
	}
	return (d);
}
