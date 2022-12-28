#include "main.h"

/**
 * main - prints the sum of all the multiples
 * of 3 or 5
 *
 * Return: Always 0.
 */

int main(void)
{
	int prod, x, y, z;

	z = 1024;
	for (y = 0; y <= z; y++)
	{
		for (x = 0; x <= z; x++)
		{
			if (y % 3 == 0 && x % 5 == 0)
			{
				prod = y * x;
			}
		}
	}
	printf("%d\n", prod);

	return (0);
}
