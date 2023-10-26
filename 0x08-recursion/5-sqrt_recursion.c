#include "main.h"

/**
* find_sqrt - Function that finds the square root.
* @n: Integer.
* @root: Root.
*
* Return: The result.
*/
int find_sqrt(int n, int root)
{
	if ((root * root) == n)
		return (root);

	if (root * root > n)
		return (-1);

	return (find_sqrt(n, root + 1));
}

#include "main.h"

/**
* _sqrt_recursion - Function that returns the natural square root of a number.
* @n: Integer
*
* Return: If n has a natural square root - The natural square root of n.
* If n does not have a natural square root - -1.
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (find_sqrt(n, 0));
}
