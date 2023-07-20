#include "variadic_functions.h"

/**
* print_numbers - function that prints numbers, followed by a new line
* @separator: pointer to a string
* @n: unsigned integers
*
* Return: void.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	if (n == 0)
		return;
	if (separator == NULL)
		return;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i != n)
			printf("%d", *separator);
	}
	va_end(ap);
	putchar('\n');
}
