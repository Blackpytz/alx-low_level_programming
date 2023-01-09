#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers.
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	unsigned long int i, j, k, sum;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				puts("Error");
				return (1);
			}
		}
	}

	if (argc - 1 == 0)
	{
		putchar('0');
		putchar('\n');
	}

	if (argc > 1)
	{
		for (k = 1; k < argc; k++)
		{
			sum += atoi(argv[k]);
		}
		printf("%d\n", sum);
	}

	return (0);
}
