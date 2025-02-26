#include "main.h"
/**
 * *_strcpy - copy src in dest
 *@dest: copy
 *@src: source
 *
 * Return: copy de src
 */
char *_strcpy(char *dest, char *src)
{
	int copi;

	for (copi = 0; copi[src] != '\0'; copi++)
	{
		dest[copi] = src[copi];
	}
	dest[copi] = '\0';
	return (dest);
}
