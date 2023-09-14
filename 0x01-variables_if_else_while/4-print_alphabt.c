#include <stdio.h>
/**
* main - the main function
* @c: the vaible
* Return: returning 0
*/
int main(void)
{
char c = 'a';

while (c <= 'z')
{
if (c != 'q' && c != 'e')
{
putchar(c);
}
}
return (0);
}
