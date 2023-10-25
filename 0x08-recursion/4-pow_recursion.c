#include "main.h"

/**
* _pow_recursion - Function that returns the value of x raised to
* the power of y.
* @x: Number to be raised.
* @y: Power to raise y to.
*
* Return: the result.
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);
	x *= _pow_recursion(x, y - 1);

	return (x);
}
