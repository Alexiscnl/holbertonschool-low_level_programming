#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strcat - Concatenates two strings.
 * @dest: Destination string where src will be appended.
 * @src: Source string to append to dest.
 *
 * Return: Pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	char *copy = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (copy);
}
/**
 * _lenght - Calculates the length of a string.
 * @b: The input string.
 *
 * Return: The length of the string.
 */
int _lenght(char *b)
{
	int a = 0;

	while (*b++)
	{
		a++;
	}
	return (a);
}
/**
 * str_concat - Concatenates two strings into a newly allocated space.
 * @s1: First string.
 * @s2: Second string.
 *
 * Return: Pointer to the newly allocated string containing s1 + s2.
 *         Returns NULL if memory allocation fails.
 */
char *str_concat(char *s1, char *s2)
{
	char *concact;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	concact = malloc(((_lenght(s1)) + (_lenght(s2)) + 1) * sizeof(char));
	if (concact == NULL)
	{
		return (NULL);
	}

	_strcat(concact, s1);
	_strcat(concact, s2);

	return (concact);
}
