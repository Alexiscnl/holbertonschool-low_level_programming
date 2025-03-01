#include "main.h"
/**
 * _strcmp - compare s1 and s2
 *@s1: hello
 *@s2: world
 *
 * Return: s1 - s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
