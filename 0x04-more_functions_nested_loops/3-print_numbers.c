#include "main.h"

/**
* print_numbers - function that prints the numbers, from 0 to 9
*
* Return: Nothing
*/
void print_numbers(void)
{
	int number = '0';

	for (; number <= '9'; number++)
	{
		_putchar(number);
	}
	_putchar('\n');
}
