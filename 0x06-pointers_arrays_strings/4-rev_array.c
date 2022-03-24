#include "main.h"
/**
 * reverse_array - function that reserve an array
 * @a: an input
 * @n: number of element of array
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int aux;

	while (i < n--)
	{
		aux = a[i];
		a[i++] = a[n];
		a[n] = aux;
	}
}
