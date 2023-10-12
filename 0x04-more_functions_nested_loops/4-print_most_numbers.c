#include "main.h"

/**
* print_most_numbers - function that prints the numbers, from 0 to 9
*
* REturn: Nothing
*/
void print_most_numbers(void)
{
	int number = '0';

	for (; number <= '9'; number++)
	{
		if (number != '2' && number != '4')
			_putchar(number);
	}
	_putchar('\n');
}
