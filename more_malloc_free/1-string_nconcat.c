#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _length - Calculates the length of a string
 * @a: The input string
 *
 * Return: Length of the string
 */
int _length(char *a)
{
	int b = 0;

	while (*a++)
	{
		b++;
	}
	return (b);
}
/**
 * string_nconcat - Concatenates two strings up to n bytes of s2
 * @s1: First string
 * @s2: Second string
 * @n: Number of bytes to take from s2
 *
 * Return: Pointer to newly allocated memory containing s1 + n bytes of s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i, j;
	char *concat;
	int size;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = _length(s1);
	len2 = _length(s2);

	if (n > len2)
	{
		n = len2;
	}

	size = len1 + n + 1;
	concat = malloc(size * sizeof(char));
	if (concat == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		concat[i] = s1[i];
	}

	for (j = 0; j < n; j++)
	{
		concat[i + j] = s2[j];
	}
	concat[i + j] = '\0';
	return (concat);
}
