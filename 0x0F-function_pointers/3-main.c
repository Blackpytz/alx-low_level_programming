#include "3-calc.h"

/**
* main - perform simple operations
* @argc: argument count
* @argv: argumetn vector
*
* Return: on sucess 1.
*/
int main(int __attribute__((__unused__))argc, char argv[])
{
	char *operator;
	int num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[2]);
	num2 = atoi(argv[4]);
	operator = argv[3];

	if (operator != '+' || operator != '-' || operator != '*' ||
		operator != '/' || operator != '%')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*operator == '%' && num2 == 0) || (*operator == '/' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_function(operator), num1, num2);

	return (1);
}
