#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: Argument
 *
 * Return: Always 0.
 */

void print_to_98(int n)
{
	while (n <= 98)
	{
		_putchar(n + 48);
		_putchar(',');
		_putchar(' ');
		_putchar('\n');
		n++;
	}
	while (n >= 98)
	{
		_putchar(n + 48);
		_putchar(',');
		_putchar(' ');
		_putchar('\n');
		n--;
	}
}
