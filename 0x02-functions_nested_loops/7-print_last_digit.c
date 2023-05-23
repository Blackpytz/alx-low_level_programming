#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @n: Parameter.
 *
 * Return: On success 0.
 */
int print_last_digit(int n)
{
	int lastdigit = 0;

	lastdigit = n % 10;

	return (lastdigit);
}
