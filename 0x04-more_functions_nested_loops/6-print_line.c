#include "main.h"

/**
 * print_line -> prints a line
 * @n: integer to print "_" n amount of times
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
