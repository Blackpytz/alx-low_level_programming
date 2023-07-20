#include "variadic_functions.h"
#include <string.h>

/**
* print_all - function that prints anything
* @format: pointer to a character array
*
* Return: void
*/
void print_all(const char * const format, ...)
{
	va_list ap;
	int i;
	char *szvar, *separator;

	va_start(ap, format);
	i = 0;
	separator = "";

	if (format)
	{
		while (*(format + i))
		{
			switch (*(format + i))
			{
				case 'c':
					printf("%s%c", separator, va_arg(ap, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(ap, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(ap, double));
					break;
				case 's':
					szvar = va_arg(ap, char *);
					if (szvar == NULL)
						szvar = "(nil)";
					printf("%s%s", separator, szvar);
					break;
				default:
					i++;
					continue;
			}
			separator = ", ";
			i++;
		}
	}
	va_end(ap);
	putchar('\n');
}
