#include <stdio.h>
#include <stdlib.h>

/**
*main - program that multiplies two numbers
*@argc: argument count
*@argv: argument vector
*Return: 0 on success.
*/
int main(int argc, char *argv[])
{
	int num1 = atoi(argv[1]), num2 = atoi(argv[2]), result = num1 * num2;

	if (argc > 1)
	{
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
