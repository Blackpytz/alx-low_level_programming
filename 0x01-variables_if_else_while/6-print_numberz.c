#include <stdio.h>
/**
 * main - Prints all single digit numbers of base 10.
 *
 * Return: On success 0.
 */

int main(void)
{
	int numbers = 48;

	while (numbers <= 57)
	{
		putchar(numbers);
		numbers++;
	}
	putchar('\n');

	return (0);
}
