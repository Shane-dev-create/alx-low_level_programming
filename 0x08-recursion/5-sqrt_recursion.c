#include "main.h"

/**
 * square_root -> checks for the square root of a number
 * @i:int to test
 * @x:int to get the square root of
 * Return: int
 */

int square_root(int i, int x)
{
	if (i * i == x)
		return (i);
	if (i * i > x)
		return (-1);
	return (square_root(i + 1, x));
}

/**
 * _sqrt_recursion -> returns the natural square root of a number
 * @n: integer to find sqrt of
 * Return: natural square root or -1
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (square_root(1, n));
}
