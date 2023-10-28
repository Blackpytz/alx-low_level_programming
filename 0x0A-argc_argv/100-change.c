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
	int cents, coins = 0, quarters, dimes, nickels, pennies;

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
	quarters = cents / 25;
	cents %= 25;

	dimes = cents / 10;
	cents %= 10;

	nickels = cents / 5;
	cents %= 5;

	pennies = cents;

	coins = quarters + dimes + nickels + pennies;

	printf("%d\n", coins);

	return (0);
}
