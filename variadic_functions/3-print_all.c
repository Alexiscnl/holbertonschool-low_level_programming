#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
/**
 * type_c - Prints a character.
 * @args: The list of arguments passed to the function.
 */
void type_c(va_list *args)
{
	printf("%c", va_arg(*args, int));
}

void type_f(va_list *args)
{
	printf("%f", va_arg(*args, double));
}
/**
 * type_i - Prints an integer.
 * @args: The list of arguments passed to the function.
 */
void type_i(va_list *args)
{
	printf("%d", va_arg(*args, int));
}
/**
 * type_s - Prints a string. If the string is NULL, it prints (nil).
 * @args: The list of arguments passed to the function.
 */
void type_s(va_list *args)
{
	char *str = va_arg(*args, char *);
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}
/**
 * print_all - Prints anything based on the format specified.
 * @format: A string representing the argument types.
 *
 * This function takes in a string `format` containing the types of the
 * arguments that follow. It supports the following types:
 * 'c' for char, 'i' for integer, 'f' for float, and 's' for string.
 */
void print_all(const char *const format, ...)
{
	print_type arr[] = {
	    {'c', type_c},
	    {'f', type_f},
	    {'i', type_i},
	    {'s', type_s},
	    {0, NULL}};

	va_list args;
	int i = 0, j;
	char *sep = "";

	va_start(args, format);

	while (format[i])
	{
		while (arr[j].type != '\0')
		{
			if (arr[j].type == format[i])
			{
				printf("%s", sep);
				arr[j].print_func(&args);
				sep = ", ";

			}
			j++;
		}
		j = 0;
		i++;
	}
	printf("\n");
	va_end(args);
}
