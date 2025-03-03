#include "main.h"
/**
 * *_memcpy - Copy a file into another file.
 *@dest: copy de source
 *@src: source files
 *@n: Number of bytes to fill.
 *
 * Return: copy
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *copy = src;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		src[i] = dest[i];
	}
	return (copy);
}
