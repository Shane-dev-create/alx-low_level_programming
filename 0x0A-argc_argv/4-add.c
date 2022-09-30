#include "main.h"
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * num_check - checks if string contains anything other than number
 * @s: string to check
 * Return: boolean
 */
int num_check(char *s)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
	{
		if (!isdigit(s[i]))
		{
			return (0);
		}
	}
	return (1);
}
/**
 * main -> prints the result of adding positive numbers
 * @argc: argument
 * @argv: number of arguments
 *Return: always 0
 */
int main(int argc, char  *argv[])
{
	int i;
	int result = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (num_check(argv[i]))
			{
				result += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", result);
		return (0);
	}
	else
	{
		printf("%d\n", 0);
		return (1);
	}

}
