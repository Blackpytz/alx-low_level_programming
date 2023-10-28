#include <stdio.h>
#include <stdlib.h>

/**
* main - Progam that prints the minimum number of coins
* to make change for an amount of money.
* @argc: Argument count.
* @argv: Argument vector.
*
* Return: 0 on success.
*/
int main(int argc, char *argv[])
{
	int cents, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	while (cents >= 25)
	{
		coins++;
		cents -= 25;
	}
	while (cents >= 10)
	{
		coins++;
		cents -= 10;
	}
	while (cents >= 5)
	{
		coins++;
		cents -= 5;
	}
	coins = cents;

	printf("%d\n", coins);

	return (0);
}
