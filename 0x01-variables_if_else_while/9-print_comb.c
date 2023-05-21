#include <stdio.h>
/**
 * main - Prints all possible combo of single-digit numbers.
 *
 * Return: On success 0.
 */

int main(void)
{
	int nums = 48;

	while (nums <= 57)
	{
		putchar(nums);
		if (nums != 57)
		{
			putchar(',');
			putchar(' ');
		}
		nums++;
	}
	putchar('\n');

	return (0);
}
