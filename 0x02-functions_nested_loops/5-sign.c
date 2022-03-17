#include "main.h"

/**
 * print_sign - prints sign of the number
 * @n: An input number
 * description: function prints the sign of the number.
 * Return: 1 if number is + 0 if the number is 0, - if the number is -.
 */
int print_sign(int n)
{
	int result;

	if (n > 0)
	{
		result = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		result = 0;
		_putchar('0');
	}
	else
	{
		result = -1;
		_putchar('-');
	}

	return (result);
}
