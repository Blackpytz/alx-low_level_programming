#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: Parameter
 *
 * Return: Always 0.
 */

void print_triangle(int size)
{
	int x, y;

	for (x = 0; x < size; x++)
		for (y = 0; y < size; y++)
		{
			if (x + y < y - 1)
			{
				putchar("#");
			}
			else
			{
				putchar(" ");
			}
		}
	putchar('\n');
}
