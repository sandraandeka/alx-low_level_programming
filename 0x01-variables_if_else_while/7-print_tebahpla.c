#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Answer 0 (Success)
 */
int main(void)
{
	char alb;

	for (alb = 'z'; alb >= 'a'; alb--)
	{
		putchar(alb);
	}
		putchar('\n');

	return (0);
}
