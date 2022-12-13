#include "main.h"

/**
 * _strcmp -> Compare two strings
 * @s1: First string to be compared
 * @s2: Second string to be compared
 * Return: Difference between strings or 0 if there's no difference
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
