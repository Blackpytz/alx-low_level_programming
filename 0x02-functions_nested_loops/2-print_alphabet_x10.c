#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase.
 *
 * Return: Void.
 */
void print_alphabet_x10(void)
{
	char alphabet;
	int num;

	for (num = 0; num <= 9; num++)
	{
		alphabet = 97;
		for (; alphabet <= 122; alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
	}
}
