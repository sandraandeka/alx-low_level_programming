#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @r: An integer input
 * Return: last digit of number r.
 */
int print_last_digit(int r)
{
	int n = r % 10;

	if (r < 0)
		n = n * -1;
	_putchar(n + '0');
	return (n);
}
