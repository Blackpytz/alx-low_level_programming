#include "main.h"

/**
* jack_bauer - function that prints every minute of the day of
* Jack Bauer, stating from 00:00 to 23:59
*
* Return: Notheing
*/
void jack_bauer(void)
{
	int hour = 0, second = 0;

	for (; hour <= 23; hour++)
	{
		for (; second <= 59; second++)
		{
			_putchar('0' + hour / 10);
			_putchar('0' + hour % 10);
			_putchar(':');
			_putchar('0' + second / 10);
			_putchar('0' + second % 10);
			_putchar('\n');
		}
		second = 0;
	}
}
