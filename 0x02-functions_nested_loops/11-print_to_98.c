#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 *
 * Return: Always 0.
 */

void print_to_98(int n)
{
	while (n <= 98)
	{
		printf("%d, ", n);
		_putchar('\n');
		n++;
	}
	while (n >= 98)
	{
		printf("%d, ", n);
		_putchar('\n');
		n--;
	}
}
