#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - the main function
 * return: the return value is 0
*/
int main(void)
{
int n, digit;

srand(time(0));
n = rand() - RAND_MAX / 2;
digit = n % 10;
if (digit > 5)
printf("%d Last digit of and is greater than 5", digit);
else if (digit == 0)
printf("%d Last digit of and is 0", digit);
else if (digit != 0 && digit < 6)
printf("%d Last digit of and is less than 6 and not 0", digit);
return (0);
}
