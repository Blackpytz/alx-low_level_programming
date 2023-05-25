#include "main.h"

/**
*print_diagonal - draws a diagonal line on the terminal
*@n: parameter
*Return: void.
*/
void print_diagonal(int n)
{
	int num1, num2;

	if (n > 0)
	{
		for (num1 = 1; num1 <= n; num1++)
		{
			for (num2 = 0; num2 < num1; num2++)
			{
				_putchar(' ');
			}
			_putchar('\\');
		}
	}
	_putchar('\n');
}
