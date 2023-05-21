#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase, and then in uppercase.
 *
 * Return: On success 0.
 */

int main(void)
{
	int alphabets = 97;

	while (alphabets <= 122)
	{
		putchar(alphabets);
		alphabets++;
	}
	alphabets = 65;
	while (alphabets <= 90)
	{
		putchar(alphabets);
		alphabets++;
	}
	putchar('\n');

	return (0);
}
