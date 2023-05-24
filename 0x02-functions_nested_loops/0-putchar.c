#include <stdio.h>

/**
 * main - prints _putchar.
 *
 * Return: On success 0,
 * On failure, 1.
 */
int main(void)
{
	char str[] = "_putchar";
	int num;

	for (num = 0; num <= 7; num++)
	{
		putchar(str[num]);
	}
	putchar('\n');

	return (0);
}
