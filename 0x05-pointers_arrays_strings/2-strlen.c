#include "main.h"

/**
 * _strlen -> returns the length of a string
 * @s: character argument to check
 * Return: 0 is success
 */

int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
