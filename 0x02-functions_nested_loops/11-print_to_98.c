#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: Arument
 *
 * Return: Always 0.
 */

void print_to_98(int n)
{
	int v;

	for (v = n; v > 98; v--)
	{
		if (n > 98)
		{
			printf("%d, ", v);
		}
		else
		{
			for (v = n; v < 98; v++)
			{
				printf("%d, ", v);
			}
		}
	}
	printf("%d\n");
}
