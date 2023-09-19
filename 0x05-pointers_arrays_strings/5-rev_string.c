#include "main.h"
/**
* rev_string -  a function that reverses a string
* @s: a variable of strings
*/
void rev_string(char *s)
{
	int l = 0, i;

	char t;

	for (; s[l] != '\0'; )
	++l;
	for (i = 0; i < l / 2; i++)
	{
		t = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = t;
	}
}
