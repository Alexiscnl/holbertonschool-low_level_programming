#include "main.h"
/**
 * _isalpha - other letter lowercase or uppercase aloso return 1
 *ohterwise return 0
 * @c: the carracter
 *
 * Return: 1 other lowercase or uppercase otherwise 0
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
