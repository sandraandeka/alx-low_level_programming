#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * main - This program will assign a random number to the variable n
 * each time it is executed
 * and determines if it is positive or negative.
 *
 * Return: Always 0 when successful
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* Use of else if statement */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
	printf("%d is negative\n", n);
	}
	return (0);
}
