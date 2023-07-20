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
	int i, nvar, len, cvar;
	char *szvar;
	double dvar;

	len = strlen(format);
	va_start(ap, format);
	i = 0;
	while (*(format + i))
	{
		switch(format)
		{
			case 'c':
				cvar = va_arg(ap, int) printf("%c", cvar);
				break;
			case 'i':
				nvar = va_arg(ap, int) printf("%d", nvar);
				break;
			case 'f':
				dvar = va_arg(ap, double) printf("%f", dvar);
				break;
			case 's':
				szvar = va_arg(ap, *char)
				if (szvar == NULL)
					printf("(nil)");
				else
					printf("%s", szvar);
				break;
		}
		if (i != len - 1)
			printf(", ");
		i++;
	}
	va_end(ap);
	putchar('\n');
}
