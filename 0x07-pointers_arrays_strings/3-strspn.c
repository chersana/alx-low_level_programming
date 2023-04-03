#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: source of string
 * @accept: accepted string
 *
 * Return:  the number of bytes in the initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, p = 0, j;

	while (accept[i])
	{
		b = 0;

		while (s[j] != 32)
		{
			if (accept[i] == s[j])
			{
				p++;
			}
			j++;
		}
		i++;
	}
	return (p);
}
