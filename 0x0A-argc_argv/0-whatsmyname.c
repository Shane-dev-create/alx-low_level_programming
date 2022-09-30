#include "main.h"
#include <stdio.h>

/**
 * main -> prints name of program
 * @argc: argc argument
 * @argv: arguments
 *Return: always 0
 */

int main(int argc, char *argv[])
{
	UNUSED(argc);
	printf("%s\n", argv[0]);
	return (0);
}
