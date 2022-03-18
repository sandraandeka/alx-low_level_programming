#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on a terminal
 * @n: input number of times '\' should be printed
 * Return: a diagonal
 */
void print_diagonal(int n)
{
	int i = 0, dg;

	if (n > 0)
	{
		for (; i < n; i++)
		{
			for (dg = 0; dg < i; j++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
