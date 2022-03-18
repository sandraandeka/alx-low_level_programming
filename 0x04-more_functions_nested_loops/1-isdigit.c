#include "main.h"

/**
 *_isdigit - function checks if c is a digit
 *@c: An input digit
 *Return: 1 if c is a digit otherwise 0
 */

int _isdigit(int c)
{
	if ((c >= 0) && (c <= 9))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
