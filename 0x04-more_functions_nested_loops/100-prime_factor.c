#include "main.h"

/**
* primefactor - function that finds the prime factor of a given number
* @num: number to find prime factor
*
* Return: The result.
*/
long int primefactor(long int num)
{
	long int i;
	long int largestprime = -1;

	while (num % 2 == 0)
	{
		largestprime = 2;
		num /= 2;
	}

	for (i = 3; i <= num; i += 2)
	{
		while (num % i == 0)
		{
			largestprime = i;
			num /= i;
		}
	}

	return (largestprime);
}

/**
* main - Entry point of the prigram
*
* Return: 0 on success
*/
int main(void)
{
	long int primenumber = 612852475143;
	long int largestprime;

	largestprime = primefactor(primenumber);

	printf("%ld\n", largestprime);

	return (0);
}
