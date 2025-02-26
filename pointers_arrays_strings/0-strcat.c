#include "main.h"
/**
 * *_strcat - concactene
 *@dest: sentence base
 *@src : cpy sentence
 *
 * Return: copy
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
