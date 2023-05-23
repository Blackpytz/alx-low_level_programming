#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase.
 *
 * Return: On success 0,
 * On failure, 1.
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

	return (0);
}
