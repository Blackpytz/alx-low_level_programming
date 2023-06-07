#include "main.h"

/**
*print_number - function that prints an integer.
*@n: parameter
*Return: On success 0.
*/
void print_number(int n)
{
	unsigned int negative;

	negative = n;

	if (n < 0)
	{
		_putchar('-');
		negative = -n;
	}

	if (n / 10)
	{
		print_number(n / 10);
	}
	_putchar('0' + (n % 10));
}
