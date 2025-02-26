#include "main.h"
/**
 * *_strncpy - copy dest in src
 *@dest: sentence source
 *@src: copy sentence
 *@n: painting
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int copy;

	for (copy = 0; copy < n && src[copy] != '\0'; copy++)
	{
		dest[copy] = src[copy];
	}
	for  (; copy < n; copy++)
	{
		dest[copy] = '\0';
	}
	return (dest);
}
