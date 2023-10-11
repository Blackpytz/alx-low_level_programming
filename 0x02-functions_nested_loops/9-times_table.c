#include "main.h"

/**
* times_table - function that prints the 9 times table, starting with 0
*
* Return: Nothing.
*/
void times_table(void)
{
	int num1, num2, multiplication = 0;

	for (num1 = 0; num1 <= 9; num1++)
	{
		for (num2 = 0; num2 <= 9; num2++)
		{
			multiplication = num1 * num2;

			if (num2 != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (multiplication <= 9)
				{
					_putchar(' ');
				}
			}

			if (multiplication <= 9)
			{
				_putchar('0' + multiplication % 10);
			}

			if (multiplication >= 10)
			{
				_putchar('0' + multiplication / 10);
				_putchar('0' + multiplication % 10);
			}
		}
		_putchar('\n');
	}
}
