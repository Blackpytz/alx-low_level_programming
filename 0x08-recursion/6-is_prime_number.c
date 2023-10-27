#include "main.h"

/**
* find_prime - Function that finds the prime.
* @n: Integer.
* @prime: Argument.
*
* Return: Return 1 if the input integer is q prime number,
* otherwise nclude "main.h"
*/
int find_prime(int n, int prime)
{
	if (n < 2)
		return (0);
	if (n == 2)
		return (1);
	if (n % prime == 0)
		return (0);
	if (prime * prime > n)
		return (1);
	return (find_prime(n, prime + 1));
}

/**
* is_prime_number - Function that returns 1
* if the input integer is a prime number
* @n: Input.
*
* Return: 1 if the input integer is a prime number,
* otherwise return 0.
*/
int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	return (find_prime(n, 2));
}
