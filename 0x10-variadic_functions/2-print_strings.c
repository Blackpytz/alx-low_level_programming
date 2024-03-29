#include "variadic_functions.h"

/**
* print_strings - Function that prints strings.
* @separator: Pointer to the string to be printed between the strings.
* @n: number of strings to be printed.
*
* Return: void.
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *str;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(ap);
	putchar('\n');
}
