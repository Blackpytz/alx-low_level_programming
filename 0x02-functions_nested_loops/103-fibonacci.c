#include "main.h"

/**
 * main - orints the sum of the even-valued
 * terms in fibonacci sequence
 *
 * Return: Always 0.
 */

int main(void)
{
	unsigned long int x, y, z, t1, t2;

	t1 = 1;
	t2 = 2;
	x = 0;
	y = 0;
	z = 0;
	for (; x < 4000000; x++)
	{
		y = t1 + t2;
		t1 = t2;
		t2 = y;
		if (t1 % 2 == 0)
			z += t1;
	}
	printf("%ld\n", z);

	return (0);
}
