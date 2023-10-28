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
	int i, cents, result = 0;
	char coins[] = {25, 10, 5, 2, 1};

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

	for (i = 0; i < 5 && cents >= 0; i++)
	{
		while (cents >= coins[i])
		{
			result++;
			cents -= coins[i];
		}
	}

	printf("%d\n", result);

	return (0);
}
