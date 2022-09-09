#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always Returns 0 (Success)
 *
 */
int main(void)
{
int i;

for (i = 0; i < 10; i++)
{
putchar((i % 10) + '0');
if (i <= 10)
continue;
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
