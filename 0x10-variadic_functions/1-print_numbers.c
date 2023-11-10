#include "variadic_functions.h"

/**
* print_numbers - Function that prints numbers.
* @separator: Pointer to the string to be printed between numbers.
* @n: Number of integers passed to the function.
*
* Return: Nothing.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(ap);
	putchar('\n');
}
