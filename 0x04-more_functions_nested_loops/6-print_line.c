#include "main.h"

/**
* print_line - function that draws a straight line in the terminal
* @n: number of times the character _ should be printed
*
* Return: Nothing
*/
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
