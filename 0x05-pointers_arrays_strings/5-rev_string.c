#include "main.h"

/**
 * rev_string - function that print a string in reverse
 * @s: An input string
 *Return: Nothing
 */

void rev_string(char *s)
{
	char l = s[0];
	int i = 0;
	int k;

	while (s[i] != '\0')
	{
		i++;
	}

	for (k = 0; k < i; k++)
	{
		i--;
		l = s[k];
		s[k] = s[i];
		s[i] = l;
	}
}
