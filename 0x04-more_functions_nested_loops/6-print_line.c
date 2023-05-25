#include "main.h"

/**
*print_line - draws a straight line in the terminal
*@n: Parameter
*Return: On success 0.
*/
void print_line(int n)
{
	int num;

	if (n > 0)
	{
		for (num = 0; num <= n; num++)
			_putchar('_');
	}
	_putchar('\n');
}
