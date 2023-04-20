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
	va_list num;
	unsigned int i, sum;

	va_start(num, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(num, int);
	}
	va_end(num);
	return (sum);
}
