#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
int _putchar(char c);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

typedef struct print_type
{
	char type;
	void(*print_func)(va_list *);
}print_type;

#endif
