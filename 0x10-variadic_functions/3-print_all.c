#include "variadic_functions.h"

/**
* print_all - Function that prints anything
* @format: List of types of arguments passed to the function.
*
* Return: Nothing.
*/
void print_all(const char * const format, ...)
{
	va_list ap;
	char *s;
	char *fmt = (char *)format;
	char c;

	va_start(ap, format);
	while ((c = *fmt++))
	{
		switch (c)
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			case 's':
				s = va_arg(ap, char *);
				if (s == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", s);
				break;
		}
		if (*(fmt) && (c == 'c' || c == 'i' || c == 'f' || c == 's'))
		printf(", ");
	}
	va_end(ap);
	putchar('\n');
}
