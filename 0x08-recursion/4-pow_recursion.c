#include "main.h"

/**
*_pow_recursion - function that returns the value of x raised to the power of y
*@x: integer to be raised to the power of y
*@y: integer to raised x to
*
*Return: -1 if y < 0 OR the correct output.
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 1)
		return (x);
	else
		return (_pow_recursion(x * x, y - 1));
}
