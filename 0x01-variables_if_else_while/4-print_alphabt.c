#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Answer 0 (Success)
 *
 */
int main(void)
{
	char alb;

	for (alb = 'a'; alb <= 'z'; alb++)
	{
		if (alb != 'e' && alb != 'q')
			putchar(alb);
	}

	putchar('\n');

	return (0);
}
