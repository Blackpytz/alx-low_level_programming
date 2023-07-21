#include "3-calc.h"

/**
* main - perform simple operations
* @argc: argument count
* @argv: argumetn vector
*
* Return: on sucess 0.
*/
int main(int __attribute__((__unused__))argc, char **argv)
{
	char *operator;
	int num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];

	if (get_op_func(op) == NULL || operator[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*operator == '%' && num2 == 0) || (*operator == '/' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(operator)(num1, num2));

	return (0);
}
