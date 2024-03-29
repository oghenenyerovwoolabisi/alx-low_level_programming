#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of arguments passed
 */

void print_all(const char * const format, ...)
{
	int j = 0;
	char *str, *sep = "";

	va_list print_all;

	va_start(print_all, format);
	if (format)
	{
		while (format[j])
		{
			switch (format[j])
			{
				case 'c':
					printf("%s%c", sep, va_arg(print_all, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(print_all, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(print_all, double));
					break;
				case 's':
					str = va_arg(print_all, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					j++;
					continue;
			}
			sep = ", ";
			j++;
		}
	}
	printf("\n");
	va_end(print_all);
}

