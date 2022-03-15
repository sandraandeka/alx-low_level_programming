#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (succes)
 *
 */
int main(void)
{
	char *ip = '_putchar';

	while (*ip)
	{
		_putchar(*ip);
		ip++;
	}
	_putchar('\n');


	return (0);
}
