#include "main.h"

/**
* more_numbers - function that prints 10 times the numbers, from 0 to 14
*
* Return: Nothing
*/
void more_numbers(void)
{
	int i, number;

	for (i = 0; i <= 9; i++)
	{
		for (number = 0; number <= 14; number++)
		{
			if (number >= 10)
				_putchar('0' + number / 10);
			_putchar('0' + number % 10);
		}
		_putchar('\n');
	}
}
