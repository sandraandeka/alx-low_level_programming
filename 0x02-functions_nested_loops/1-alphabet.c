#include <stdlib.h>
#include "main.h"
/**
 * print_alphabet - prints lowercase alphabets
 *
 * Return: nothing
 *
 */
void print_alphabet(void)
{
	char alb;

	for (alb = 'a'; alb <= 'z'; alb++)
	{
		_putchar(alb);
	}
	_putchar('\n');

}
