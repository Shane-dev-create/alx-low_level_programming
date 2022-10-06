#include "main.h"
/**
 * string_nconcat -> concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: n amount of bytes
 * Return: char pointer or NULL if fuctions fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, b, c;
	char *s;

	if (s2 == NULL)
		s2 = "";
	if (s1 == NULL)
		s1 = "";

	b = 0;
	c = 0;
	while (s2[c] != '\0')
		c++;
	while (s1[b] != '\0')
		b++;

	if (n >= c)
		n = c;

	s = malloc(sizeof(char) * n + b + 1);
	if (s == NULL)
		return (NULL);

	for (i = 0; i < b; i++)
		s[i] = s1[i];

	for (i = 0; i < n; i++)
		s[i + b] = s2[i];

	s[i + b] = '\0';

	return (s);
}
