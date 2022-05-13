#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers , from 0 to 14
 *
 * _putchar only 3 times
 * Return: 0 to 14 x10 followed by a new line
 */
void more_numbers(void)
{
	int i, times;

	for (times = 0; times < 10; times++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				_putchar(i / 10 + '0');
			}
			else
			{
				_putchar(i % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
