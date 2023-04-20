#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: input
 * @...: variable number of paramters
 *
 * Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list a;
	unsigned int i, sum;

	va_start(a, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(a, int);
	}
	va_end(a);
	return (sum);
}
