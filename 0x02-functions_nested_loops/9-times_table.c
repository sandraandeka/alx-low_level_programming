#include "main.h"

/**
 * times_table - it prints 9 times table starting with 0
 * Return: nothing
 */

void times_table(void)
{
	int j, k, l;

	for (j = 0; j <= 9; j++)
	{

		for (k = 0; k <= 9; k++)
		{
			l = j * k;

			if (k != 0)
			{
				_putchar(',');
				_putchar(' ');
			}

			if (l >= 10)
			{
				_putchar((l / 10) + '0');
				_putchar((l % 10 )+ '0');
			}

			else if (l < 10 && k != 0)
			{
				_putchar(' ');
				_putchar((l % 10) + '0');
			}

			else
			{
				_putchar((l % 10) + '0');
			}
		}
		_putchar('\n');
	}
}

