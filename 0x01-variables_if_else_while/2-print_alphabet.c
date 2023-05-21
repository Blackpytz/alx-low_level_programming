#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: On success 0.
 */

int main(void)
{
	int a = 97;

	while (a < 122)
	{
		putchar(a);
		a++;
	}
	return (0);
}
