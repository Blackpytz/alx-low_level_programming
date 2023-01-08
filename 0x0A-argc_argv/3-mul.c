#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Return: Always 0 (success).
 */

int main(int argc, char *argv[])
{
	int i;
	int sum = 1;

	if (argc - 1 != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			sum *= atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
