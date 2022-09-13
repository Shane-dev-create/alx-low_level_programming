#include "main.h"

/**
 * print_alphabet_x10 -> print the alphabet in lowercase 10 times
 */

void print_alphabet_x10(void)
{
	char a;
	int i;

	for (i = 0; i <= 10; i++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			putchar(a);
		}
		putchar('\n');
	}
}
