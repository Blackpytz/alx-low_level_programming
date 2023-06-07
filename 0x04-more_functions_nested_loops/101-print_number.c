#include "main.h"

/**
*print_number - function that prints an integer.
*@n: parameter
*Return: On success 0.
*/
void print_number(int n)
{
	unsigned int x;

	x = n;

	if (n < 0)
	{
		_putchar('-');
		x = -n;
	}

	if (x / 10)
	{
		print_number(x / 10);
	}
	_putchar('0' + (x % 10));
}
