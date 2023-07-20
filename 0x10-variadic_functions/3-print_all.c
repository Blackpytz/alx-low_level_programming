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
	int i, nvar, cvar;
	char *szvar, *separator;
	double dvar;

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
					cvar = va_arg(ap, int), printf("%s%c", separator, cvar);
					break;
				case 'i':
					nvar = va_arg(ap, int), printf("%s%d", separator, nvar);
					break;
				case 'f':
					dvar = va_arg(ap, double), printf("%s%f", separator, dvar);
					break;
				case 's':
					szvar = va_arg(ap, char *);
					if (szvar == NULL)
						printf("(nil)");
					else
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
