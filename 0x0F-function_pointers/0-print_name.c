#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - function that prints a name
 * @name: input
 * @f: a pointer
 *
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
