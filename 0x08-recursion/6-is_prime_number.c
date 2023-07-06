#include "main.h"

/**
*is_prime_number_helper - function that returns 1 if the input
*integer is a prime number, otherwise return 0.
*@n: parameter
*@divisor: parameter
*
*Return: 1 if the input integer is a prime number otherwise return 0.
*/
int is_prime_number_helper(int n, int divisor)
{
	if (n % divisor != 0 && divisor != n)
		return (1);
	if (n % divisor == 0)
		return (0);
	return (is_prime_number_helper(n, divisor + 1));
}

/**
*is_prime_number - function that returns 1 if the input integer is a prime number
*@n: parameter
*
*Return: 1 if the input integer is a prime number otherwise return 0.
*/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime_number(n, 2));
}
