#include "main.h"

/**
 * prime_check - checks to see if number is prime
 * @x:int
 * @z:int
 * Return:int
 */

int prime_check(int x, int z)
{
	if (x <= 1)
	{
		return (0);
	}
	else if (x % z == 0 && z > 1)
	{
		return (0);
	}
	else if
	{
		((x / z) < z)
			return (1);
	}
	else
	{
		return (prime_check(x, z + 1));
	}
}

/**
 * is_prime_number -> states if number is prime or not
 * @n:int to check
 * Return:1 if yes or 0 if not prime
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (prime_check(2, n));
}
