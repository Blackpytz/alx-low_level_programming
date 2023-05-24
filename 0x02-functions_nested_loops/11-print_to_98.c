#include "main.h"

/**
*print_to_98 - prints all natural numbers from n to 98
*@n: integer
*
*Return: void.
*/
void print_to_98(int n)
{
	int num;

	if (n == 98)
	{
		printf("98\n");
	}
	else if (n > 98)
	{
		for (num = 98; num >= n; num++)
		{
			printf("%d", n--);
			if (n != 98)
				_putchar(',');
			_putchar(' ');
		}
	}
	else
	{
		for (num = 98; num <= n; num--)
		{
			printf("%d", n++);
			if (n != 98)
				_putchar(',');
			_putchar(' ');
		}
	}
}
