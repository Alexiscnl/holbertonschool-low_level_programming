#include "main.h"
/**
 * *_memset - Fill n bytes in the memory area s with the value b.
 *@s: zone memoire
 *@b: octet
 *@n: numbre d'octet a remplire
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
