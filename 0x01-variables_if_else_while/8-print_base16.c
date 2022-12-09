#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: 0
 */

int main(void)
{
	int num = 48;
	char alpha = 'a';

	while (num < 58)
	{
		putchar(num);
		num++;
	}
	while (alpha < 'g')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');

	return (0);
}
