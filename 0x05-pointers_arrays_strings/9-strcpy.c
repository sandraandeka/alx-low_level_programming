#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: destination of copy
 * @src: source to copy
 * Return: pointer to dest
 */

char  *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(scr + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
