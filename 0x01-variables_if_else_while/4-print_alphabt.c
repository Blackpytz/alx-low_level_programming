#include <stdio.h>
/**
 * main - prints the alphabet in lowercase except e and q.
 *
 * Return: On success 0.
 */

int main(void)
{
	int alphabets = 97;

	while (alphabets <= 122)
	{
		if (alphbets != 'q' && alphabets != 'e')
			putchar(alphabets);
		alphabets++;
	}
	putchar('\n');

	return (0);
}
