#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @n: Parameter.
 *
 * Return: On success 0.
 */
int print_last_digit(int n)
{
	int num, lastdigit;

	num = n % 10;

	lastdigit = num > 0 ? num : -num;

	_putchar('0' + lastdigit);

	return (lastdigit);
}
