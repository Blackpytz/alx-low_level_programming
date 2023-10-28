#include <stdio.h>
#include <stdlib.h>

/**
* main - Program that multifplies two numbers.
* @argc: Argument count.
* @argv: Argument vector.
*
* Return: 0 on success.
*/
int main(int argc, char *argv[])
{
	int sum;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	sum = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", sum);

	return (0);
}
