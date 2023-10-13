#include "main.h"

/**
* print_triangle - function that prints a triangle
* @size: the size of the triangle
*
* Return: Nothing.
*/
void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (k = i; k < size; k++)
				_putchar(' ');
			for (j = 0; j < i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
