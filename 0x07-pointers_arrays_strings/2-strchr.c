#include "main.h"
#include <stddef>
/**
 * _strchr - function that locates a character in a string
 * @s: string
 * @c: character
 * @null: string
 *
 * return: char c
 */
char *_strchr(char *s, char c)
{
	int i, j=0;

	while (s[j])
	{
		j++;
	}
	for (i=0; i <=j; i++)
	{
		if (c == s[i])
		{
			s += i;
			return (s)
		}	
	}
	return ('\0');
}