#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - entry point
 *
 * Return:always return 0
 *
 */
/* betty style doc for function main goes there */
int main(void)
{
int n;
int lastnum;

srand(time(0));
n = rand() - RAND_MAX / 2;
lastnum = n % 10;

if (lastnum > 5)
{
printf("Last digit of %i is %i and is greater than 5\n", n, lastnum);
}
else if (lastnum == 0)
{
printf("Last digit of %i is %i and is 0\n", n, lastnum);
}
else
{
printf("Last digit of %i is %i and is less than 6 and not 0\n", n, lastnum);
}
return (0);
}
