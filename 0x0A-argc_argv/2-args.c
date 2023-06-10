#include <stdio.h>

/**
*main - program that prints all arguments it receives
*@argc: argument count
*@argv: argument vector
*Return: 0 on success.
*/
int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);

	return (0);
}
