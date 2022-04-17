#include "main.h"
#include <stdlib.h>

/**
 * check_specifiers - checks if there is a valid format specifier
 * @format: possible format specifier
 * Return: pointer to valid function or NULL
 */
static int (*check_specifiers(const char *format))(va_list)
{
	unsigned int i;
	print_t p[] = {
		{"c", print_c},
		{"s", print_s},
		{"i", print_i},
		{"d", print_d},
		{"u", print_u},
		{"b", print_b},
		{"x", print_x},
		{"o", print_o},
		{"X", print_X},
		{"p", print_p},
		{"S", print_S},
		{"r", print_r},
		{"R", print_R},
		{NULL, NULL}
	};

	for (i = 0; p[i].t != NULL; i++)
	{
		if (*(p[i].t) == *format)
		{

			break;
		}

	}
	return (p[i].f);
}

/**
 * _printf - prints anything
 * @format: list of argument types passed to the function
 *
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	unsigned int i = 0, j = 0;
	va_list ap;
	int (*f)(va_list);

	if (format == NULL)
		return (-1);
	va_start(ap, format);
	while (format[i])
	{
		for (; format[i] != '%' && format[i]; i++)
		{
			_putchar(format[i]);
			j++;
		}
		if (!format[i])
			return (j);
		f = check_specifiers(&format[i + 1]);
		if (f != NULL)
		{
			j += f(ap);
			i += 2;
			continue;
		}
		if (!format[i + 1])
			return (-1);
		_putchar(format[i]);
		j++;
		if (format[i + 1] == '%')
			i += 2;
		else
			i++;
	}
	va_end(ap);
	return (j);
}
