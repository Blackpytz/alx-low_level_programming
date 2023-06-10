#include <stdio.h>
#include <stdlib.h>

/**
*main - program that adds positive numbers
*@argc: argument count
*@argv: pointer to an arrays of characters
*Return: On success 0
*OR on failure -1.
*/
int main(int argc, char *argv[])
{
	int i, digit, sum;

	for (i = 0; i < argc; i++)
	{
		for (digit = 0; argv[i][digit] != '\0'; digit++)
		{
			if (argv[i][digit] < 48 && argv[i][digit] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}
