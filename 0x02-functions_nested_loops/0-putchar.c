#include "main.h"

/**
 * main - prints _putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char *myChar = "_putchar";

while (*myChar)
{
putchar(*myChar);
myChar++;
}
putchar('\n');
return (0);
}


