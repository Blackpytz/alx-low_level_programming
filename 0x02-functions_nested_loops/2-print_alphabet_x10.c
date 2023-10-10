#include "main.h"

/**
* print_alphabet_x10 - function that prints 10 times the alphabet
* in lowercase
*
* Return: Nothing
*/
void print_alphabet_x10(void)
{
	int alphabet;
	int num = 0;

	while (num <= 9)
	{
		alphabet = 97;
		while (alphabet <= 122)
		{
			_putchar(alphabet);
			alphabet++;
		}
		_putchar('\n');
		num++;
	}
}
