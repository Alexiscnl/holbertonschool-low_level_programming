#include "main.h"
/**
 * *_strncat - concatene dest nd src
 *@dest: sentence
 *@src: copy sentence
 *@n: bytes
 *
 * Return: copy
 */
char *_strncat(char *dest, char *src, int n)
{
	char *copy = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (n > 0 && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';
	return (copy);
}
