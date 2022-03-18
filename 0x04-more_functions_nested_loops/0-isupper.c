#include "main.h"

/**
 * _isupper - A function that checks for an uppercase character.
 * @c: An input character
 * Return: 1 if c is uppercase or 0 otherwise
 */

int _isupper(int c)
{
	char ALB = 'A';
	int num = 0;

	for (ALB = 'A'; ALB <= 'Z'; ALB++)
	{
		if (c == ALB)
		{
			num = 1;
		}
		else
		{
			num = 0;
		}
	}
	return (num);
}
