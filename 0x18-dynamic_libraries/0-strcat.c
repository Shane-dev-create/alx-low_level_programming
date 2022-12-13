#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: A pointer to the string to be concatenated
 * @src: The source string to be appended
 * Return:char
 */

char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (s);
}
