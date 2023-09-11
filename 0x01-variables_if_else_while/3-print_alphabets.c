#include <stdio.h>
/**
 * main - the main fuction
 * Return: the return value is 0
*/
int main(void)
{
char c1 = 'a', c2 = 'A';
for (c1 = 'a'; c1 <= 'z'; c1++)
putchar(c1);
for (c2 = 'A'; c2 <= 'Z'; c2++)
putchar(c2);
putchar('\n');
}
