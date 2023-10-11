#include "main.h"

/**
* print_last_digit - function that prints the last digit of a number
* @i: number ot be checked
*
* Return: the value of the last digit
*/
int print_last_digit(int i)
{
	int lastdigit = i % 10;

	if (lastdigit < 0)
	{
		lastdigit = -lastdigit;
	}

	_putchar(lastdigit + '0');
	return (lastdigit);
}
