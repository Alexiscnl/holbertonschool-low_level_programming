#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - print name
 *@name: the name dysplay
 *@f: pointer to the function that dysplay the name
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
