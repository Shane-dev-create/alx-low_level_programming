#include "main.h"

/**
 * rot13 -> Encodes string into rot13 encrytption
 * @s: string to encrypt
 * Return: char value
 */

char *rot13(char *s)
{
	char a[52] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char b[52] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{

		for (j = 0; a[j] != '\0'; j++)
		{
			if (s[i] == a[j])
			{
				s[i] = b[j];
				break;
			}
		}
	}
	return (s);
}
