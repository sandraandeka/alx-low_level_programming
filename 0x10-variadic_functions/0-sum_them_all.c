#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums of all its parameters.
 * @n: number of parameters
 *
 * Return: sum of all parameters
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list op;

	va_start(op, n);
	for (i = 0; i < n; i++)
		sum += va_arg(n, int);
	va_end(op);
	return (sum);
}
