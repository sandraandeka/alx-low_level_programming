#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal
 * @n: input number of times to print '_'
 * Return: a straight line
 */

void print_line(int n)
{
	int times;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (times = 1; times <= n; times++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
