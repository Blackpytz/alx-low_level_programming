#include "main.h"

/**
*print_triangle - prints a triangle
*@size: size of the triangle
*Return: On success 0.
*/
void print_triangle(int size)
{
	int row, column;

	if (size > 0)
	{
		for (row = 1; row <= size; row++)
		{
			for (column = 1; column <= row; column++)
			{
				for (; column - row; column--)
					_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
