#include "main.h"
/**
 * _strpbrk -  a function that searches a string for any of a set of bytes
 * @s: the string
 * @accept: source of string
 *
 * Return: a pointer to byte
 */
char *_strpbrk(char *s, char *accept)
{
	int n = 0, b;

	while (s[n])
	{
		b = 0;

		while (accept[b])
		{
			if (s[n] == accept[b])
			{
				s += n;
				return (s);
			}
			b++;
		}
		n++;
	}

	return ('\0');
}
