#include "main.h"
/**
 * _strstr - a function that locates a substring
 * @needle: substring
 * @haystack: origin string
 *
 * Return: beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int a = 0, k = 0;

	while (haystack[a])
	{
		while (needle[k])
		{
			if (haystack[a + k] != needle[k])
			{
				break;
			}
			k++;
		}

		if (needle[k] == '\0')
		{
			return (haystack + a);
		}
		a++;
	}
	return ('\0');
}
