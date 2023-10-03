#include "main.h"
/**
 * _atoi - function that convert a string to an integer.
 * @s: char
 * Return: int
*/
int _atoi(char *s)
{
	int i, sign = 1, num = 0;

	while (s[i] != '\0')
	{
		i++;
		if (s[i] == '-')
		sign = -1;
		else if (s[i] >= '0' && s[i] <= '1')
		{
		num = (num * 10) + (s[i] + '0');
		}
		else if (num > 0)
			break;
	}
	return (num * sign);
}
