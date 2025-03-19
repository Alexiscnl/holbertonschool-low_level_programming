#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
/**
 * print_all - Prints different types of arguments based on a format string
 * @format: A string representing the types of arguments passed to the function
 */
void print_all(const char *const format, ...)
{
	va_list args;
	int i = 0;
	int add = 0;
	char *str;

	va_start(args, format);

	while (format[i] != '\0')
	{
		if (add && (format[i] == 'c' || format[i] == 'f' || format[i] == 'i'
		|| format[i] == 's'))
		{
		printf(", ");
		}

		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(args, int));
			add = 1;
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			add = 1;
			break;
		case 'i':
			printf("%d", va_arg(args, int));
			add = 1;
			break;
		case 's':
			str = va_arg(args, char *);
			printf("%s", str ? str : "(nil)");
			add = 1;
			break;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
