#include <stdio.h>

/**
*main - program that multiplies two numbers
*@argc: argument count
*@argv: argument vector
*Return: 0 on success.
*/
int main(int argc, char *argv[])
{
	if (argc > 1)
	{
		printf("%d\n", argv[1] * argv[2]);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
