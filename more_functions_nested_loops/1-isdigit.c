#include "main.h"
/**
 * _isdigit - display digit or letter
 *@c: display 0: and a:
 *
 * Return: digit or no 
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
