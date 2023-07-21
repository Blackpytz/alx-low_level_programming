#include "3-calc.h"

/**
* get_op_func - function that selects the correct function to perform
* the operation asked by the user.
* @s: pointer to a character that represents the operator passed as
* argument to the program
*
* Return: A pointer to the function that corresponds to the operator
* give as a parameter or NULL if s does not match the expected
* operators.
*/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op != NULL)
	{
		if (*(ops[i].op) == *s)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
