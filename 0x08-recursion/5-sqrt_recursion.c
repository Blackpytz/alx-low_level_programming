#include "main.h"

/**
* sqrtHelper - function that finds the square root.
*@n: parameter
*@guess: parameter
*
*Return: square root OR -1 if no natural square root exits.
*/

int sqrtHelper(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	if (guess * gurss > n)
		return (-1);
	return (sqrtHelper(n, guess + 1);
}

/**
* _sqrt_recursion - function that returns the natural square root of a number
*@n: parameter
*
*Return: -1 if n does not have a natural square root
*OR the correct square root of n.
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrtHelper(n, 0);
}
