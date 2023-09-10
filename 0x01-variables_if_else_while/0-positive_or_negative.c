#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - the main function
 * Return: returning a 0 value
 *
*/

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
printf("%i is positive", n);
else if (n == 0)
printf("%i is zero", n);
else
printf("%i is negative", n);
return (0);
}
