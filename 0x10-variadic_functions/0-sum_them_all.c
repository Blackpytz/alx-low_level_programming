#include "variadic_functions.h"

/**
* sum_them_all - function that returns the sum of all its parameters
* @n: unsigned integer
*
* Return: The total sum or 0 if n == 0
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum, i;
	va_list ap;

	if (n == 0)
		return (0);
	sum = 0;
	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);
	return (sum);
}
