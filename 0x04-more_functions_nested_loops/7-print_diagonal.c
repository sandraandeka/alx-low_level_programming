#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on a terminal
 * @n: input number of times '\' should be printed
 * Return: a diagonal
 */
void print_diagonal(int n)
{
	int o, dg;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (o = 1; o <= n; o++)
		{
			for (dg = 1; dg < o; dg++)
			{
				_putchar('\n');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
