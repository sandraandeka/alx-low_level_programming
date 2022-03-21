#include "main.h"

/**
 *_strlen - fuction that checks the length of a string
 *@s: An input string
 *Return: Nothin
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')

		length++;
	return (length);
}
