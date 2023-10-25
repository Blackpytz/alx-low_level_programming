#include "main.h"

/**
* factorial - Function that retruns the factorial of a given number.
* @n: Number.
*
* Return: Factorial of n.
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
	{
		return (1);
	}
	n = n * factorial(n - 1);

	return (n);
}
