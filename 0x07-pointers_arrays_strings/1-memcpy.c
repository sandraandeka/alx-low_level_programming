#include "main.h"

/**
 * *_memcpy - function that copy bytes from one memory area to another
 * @dest: destination which the memory is being copied
 * @src: memory area to copy
 * @n: number of bytes to copy
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
