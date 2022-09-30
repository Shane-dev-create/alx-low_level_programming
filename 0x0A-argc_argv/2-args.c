#include "main.h"
#include <stdio.h>

/**
 * main -> prints all arguments received
 * @argc: argument
 * @argv: number of arguments
 *Return: always 0
 */

int main(int argc, char  *argv[])
{
	int counter;

	for (counter = 0; counter < argc; counter++)
	{
		printf("%s\n", argv[counter]);
	}
	return (0);
}
