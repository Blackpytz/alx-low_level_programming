#include <stdio.h>
#include <stdlib.h>

/**
*main - program that prints the minimum number of coins to
*make change for an amount of money
*@argc: argument count
*@argv: argument vector
*Return: On success 0 OR
*On failure 1.
*/
int main(int argc, char *argv[])
{
	int cents = 0, sum = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 1)
		printf("0\n");
	else
	{
		while (cents / 25)
			sum++;
		while (cents / 10)
			sum++;
		while (cents / 5)
			sum++;
		while (cents / 2)
			sum++;
		while (cents / 1)
			sum++;

		printf("%d\n", sum);
	}

	return (0);
}
