#include "main.h"
/**
 *_pow_recursion - finds x raised to the power of y
 *@x: arg value 1
 *@y: power of arg value 1
 *
 *Return: integer value of x to the pow y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
	return (x * _pow_recursion(x, y - 1));
	}
}
