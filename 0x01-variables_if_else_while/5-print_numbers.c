#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10.
 *
 * Return: On success 0.
 */

int main(void)
{
	int nums = 48;

	while (nums <= 57)
	{
		putchar(nums);
		nums++;
	}
	putchar('\n');

	return (0);
}
