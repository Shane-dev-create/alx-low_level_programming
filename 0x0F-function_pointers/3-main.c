#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main -> main function
 * @argc: arguments
 * @argv: array of args
 * Return: 0 (for Success)
 */

int main(int argc, char *argv[])
{
	int (*oprt)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	function = get_op_func(argv[2]);

	if (!function)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", function(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
