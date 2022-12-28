#include "main.h"

/**
 * main - prints the sum of all the multiples
 * of 3 or 5
 *
 * Return: Always 0.
 */

int main(void)
{
	int prod = 0, y, z;

	z = 1024;
	for (y = 1; y < z; y++)
	{
		if (y % 3 == 0 || y % 5 == 0)
		{
			prod += y;
		}
	}
	printf("%d\n", prod);

	return (0);
}
