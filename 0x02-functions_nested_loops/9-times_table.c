#include "main.h"

/**
 * times_table -> 9 times table
 *
 */

void times_table(void)
{
	int num;
	int multiplier;
	int prod;

	for (num = 0; num <= 9; ++num)
	{
		_putchar('0');
		for (multiplier = 1; multiplier <= 9; ++multiplier)
		{
			_putchar(',');
			_putchar(' ');

			prod = num * multiplier;

			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + '0');
			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}
