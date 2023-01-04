#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: Parameter
 *
 * Return: Always 0.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
