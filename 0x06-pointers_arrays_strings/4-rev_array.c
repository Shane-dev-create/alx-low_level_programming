#include "main.h"

/**
 * reverse_array -> Reverses an array of integers
 * @a: Array of int to be reversed
 * @n: Number of elements in array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, c;

	for (i = 0; (i < (n - 1) / 2); i++)

	{
		c = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = c;
	}
}
