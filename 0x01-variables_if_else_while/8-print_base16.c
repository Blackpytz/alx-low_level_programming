#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase.
 *
 * Return: On success 0.
 */

int main(void)
{
	int base16 = 48;

	while (base16 <= 57)
	{
		putchar(base16);
		base16++;
	}
	base16 = 97;
	while (base16 <= 102)
	{
		putchar(base16);
		base16++;
	}
	putchar('\n');

	return (0);
}
