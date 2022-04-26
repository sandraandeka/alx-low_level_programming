#include "main.h"

/**
 * _islower - print lowercase function
 * @c: An input character
 * Return: 1 if c is lowercase, 0 if its not c
 */

int _islower(int c)

{
	if (c >= 'a' || c <= 'z')
		return (1);
	else
		return (0);
}
