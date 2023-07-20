#include "variadic_functions.h"

/**
* print_strings - function that prints strings, followed by a new line
* @separator: pointer to a array of characters
* @n: unsigned integer
*
* Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, str;

	str = 0;
	if (separator == NULL)
		separator = "";

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, int);
		if (str == NULL)
			printf("(nil)");
		else
		{
			printf("%s", (char( str);
			if (i != n - 1)
				printf("%s", separator);
		}
	}
	va_end(ap);
	putchar('\n');
}
