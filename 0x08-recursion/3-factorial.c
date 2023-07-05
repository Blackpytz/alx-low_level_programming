#include "main.h"

/**
*factorial - function that returns the factorial of a number
*@n: argument
*
*Return: -1 if n > 0 OR the correct factorial of n.
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
