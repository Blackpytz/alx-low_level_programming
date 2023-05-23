#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase.
 *
 * Return: Void.
 */
void print_alphabet(void)
{
	char alphabets = 97;

	while (alphabets <= 122)
	{
		_putchar(alphabets);
		alphabets++;
	}
	_putchar('\n');
}
