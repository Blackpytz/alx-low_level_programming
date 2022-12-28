#include "main.h"

/**
 * main - prints the first 50 fibonacci numbers
 * starting with 1
 *
 * Return: Always 0.
 */

int main(void)
{
	unsigned long int i, j = 0, t1 = 1, t2 = 2;

	for (i = 0; i < 50; i++)
	{
		printf("%ld", t1);
		j = t1 + t2;
		t1 = t2;
		t2 = j;
		if (i != 49)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
