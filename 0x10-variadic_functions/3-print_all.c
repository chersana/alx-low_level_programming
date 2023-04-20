#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - function that prints anything
 * @format: list of types of arguments
 * @...: a variable
 *
 * Return: 0
 */
void print_all(const char * const format, ...)
{
	int i;
	char *str, *s = "";

	va_list l;

	va_start(l, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", s, va_arg(l, int));
					break;
				case 'i':
					printf("%s%d", s, va_arg(l, int));
					break;
				case 'f':
					printf("%s%f", s, va_arg(l, double));
					break;
				case 's':
					s = va_arg(l, char *);
					if (!str)
					{
						str = "(nil)";
					}
					printf("%s%s", s, str);
					break;
				default:
					i++;
					continue;
			}
			s = ",";
			i++;
		}
	}
	printf("\n");
	va_end(l);
}
