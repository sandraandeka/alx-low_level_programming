#include "main.h"

/**
 * _strncat - function that concatenates two strings.
 * @dest: aan input string
 * @src: an input string
 * @n: an input integer
 * Return: A pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int strlen = 0, i = 0;

	char *temp = dest, *start = src;

	while (*src)
	{
		strlen++;
		src++;
	}
	while (*dest)
		dest++;

	if (n > strlen)
		n = strlen;

	src = start;

	for (; i < n; i++)
		*dest++ = *src++;

	*dest = '\0';
	return (temp);
}
