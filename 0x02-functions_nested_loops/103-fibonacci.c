#include "main.h"

/**
 * main - orints the sum of the even-valued
 * terms in fibonacci sequence
 *
 * Return: Always 0.
 */

int main(void)
{
	unsigned long int temp, y, t1, t2;

	t1 = 0;
	t2 = 1;
	temp = 0;
	y = 0;
	while (temp < 4000000)
	{
		temp = t1 + t2;
		t1 = t2;
		t2 = temp;
		if (temp % 2 == 0)
			y += temp;
	}
	printf("%ld\n", y);

	return (0);
}
