#include "main.h"

void print_alphabet(void);

/**
 * print_alphabet - prints the alphabet
 */

void print_alphabet(void)
{
	int a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
}
