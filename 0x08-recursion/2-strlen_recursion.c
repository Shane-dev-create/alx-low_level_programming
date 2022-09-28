#include "main.h"

/**
 * _strlen_recursion -> Returns the length of a string
 * @s: string to process
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int x = 0;

	if (*s)
	{
		x++;
		return (_strlen_recursion(s + 1));
	}
}
