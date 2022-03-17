#include "main.h"

/**
 * _isalpha - checks if its alphabet
 * @c: character to check
 *  Return: 1  if its letter, 0 otherwise.
 */
int _isalpha(int c)
{
	char i, I;
	int alb = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		for (I = 'A'; I <= 'Z'; I++)
		{
			if (c == i || c == I)
			{
				alb = 1;
			}
		}
	}
	return (alb);
}

