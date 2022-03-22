#include "main.h"

/**
 * _strlen - returns string length
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * puts2 - prints every other char in the string starting with the 1st
 * then \n
 * @str: string
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0' && i < _strlen(str); i = i + 2)
		_putchar(str[i]);

	_putchar('\n');
}
