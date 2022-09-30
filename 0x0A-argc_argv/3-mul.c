#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main -> multiplies two integers
 * @argc: argument
 * @argv: number of arguments
 *Return: always 0
 */
int main(int argc, char  *argv[])
{
	int result, a, b;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		result = a * b;

		printf("%d\n", result);
		return (0);
	}
	else
		printf("%s\n", "Error");
	return (1);
}
