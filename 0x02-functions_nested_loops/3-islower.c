#include "main.h"

/**
 * _islower - print lowercase function
 * @c: An input character
 * Return: 1 if c is lowercase, 0 if its not c
 */

int _islower(int c)

{
	char alb;
	int check = 0;

	for (alb = 'a'; alb <= 'z'; alb++)
	{
		if (alb == 'c')
		{
			check = 1;
		}
		else
		{
			check = 0;
		}
	}
	return (check);
}
