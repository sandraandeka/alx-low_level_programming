#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char alb;

	for (alb = 'a'; alb <= 'z'; alb++)
	{
		putchar(alb);
	}
	for (alb = 'A'; alb <= 'Z'; alb++)
	{
		putchar(alb);
	        putchar('\n');
        }

	return (0);
}
