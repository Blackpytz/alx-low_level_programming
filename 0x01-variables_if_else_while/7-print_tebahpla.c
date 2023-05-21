#include <stdio.h>
/**
 * main - Prints the lowercase alphabet in reverse.
 *
 * Return: On success 0.
 */

int main(void)
{
	int alphabets = 122;

	while (alphabets >= 97)
	{
		putchar(alphabets);
		alphabets--;
	}
	putchar('\n');

	return (0);
}
