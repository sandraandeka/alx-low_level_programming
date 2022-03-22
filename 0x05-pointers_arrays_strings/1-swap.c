#include "main.h"

/**
 * swap_int - function that swaps the value ot two integers.
 * @a: input integer pointer
 * @b: an input integer pointer
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
