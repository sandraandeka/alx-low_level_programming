#include <strarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - strings, followed by a new line.
 * @separator: separator to print between the strings
 * @n: number of strings to print
 *
 * Return: void
 */
void print _strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list op;

	va_start(op, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(op, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nill)");
		if (i < n - 1 && separator)
			printf("%s", separator);
	}

	printf("\n");
	va_end(op);
}
