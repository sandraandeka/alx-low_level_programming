#include "main.h"
/**
 * prime_check - checks if a numer is prime
 * @r: factor check
 * @p: possible prime number
 *
 *Return: 1 if prime , 0 if not
 */
int prime_check(int r, int p)
{
	if (p < 2 || p % r == 0)
		return (0);
	else if (r > p)
		return (1);
	else
		return (prime_check(r + 1, p));
}

/**
 *is_prime_number - states if a numer is prime
 *@n: number to check
 *
 * Return: 1 if prime , 0 if not
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (prime_check(2, n));
}
