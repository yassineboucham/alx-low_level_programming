#include "main.h"
/**
* _abs - a function that computes the absolute value of an integer
* @num: int
* Return:  absolute value
*/

int _abs(int num)
{
	if (num < 0)
		return (-num);
	else
		return (num);
}
