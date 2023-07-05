#include "main.h"

/**
* _sqrt_recursion - function that returns the natural square root of a number
*@n: parameter
*
*Return: -1 if n does not have a natural square root
*OR the correct square root of n.
*/
int _sqrt_recursion(int n)
{
	int i = 0;

	if (n == 1)
		return (1);
	if (n % 2 != 0)
		return (-1);
	if (n % 2 == 0)
		return (i + _sqrt_recursion(n / 2));
}
