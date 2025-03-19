#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
int _putchar(char c);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char *const format, ...);
/**
 * struct print_type - structure to store a type and its associated print
 *function
 *@type: a character representing the type of argument
 *(e.g., 'c' for char, 'i' for int)
 *@print_func: a pointer to the function that handles printing the
 *corresponding type
 *
 * Description: This structure is used to associate a type character with a
 *function
 * that knows how to print that type. The `print_func` will be called when the
 *type is encountered in the format string.
 */
typedef struct print_type
{
	char type;
	void (*print_func)(va_list *);
} print_type;

#endif
