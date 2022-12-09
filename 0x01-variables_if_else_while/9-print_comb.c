#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 *
 * Return: 0
 */

int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		putchar(44);
		putchar(' ');
		i++;
	}
	putchar('\n');

	return (0);
}
