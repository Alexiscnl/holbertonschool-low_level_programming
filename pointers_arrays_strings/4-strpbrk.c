#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - Find the first character in a string that matches any byte
 * in accept
 * @s: The string to be checked.
 * @accept: The set of bytes to look for in s.
 *
 * Return: NULL
 */
char *_strpbrk(char *s, char *accept)
{
int i, j;

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
return (s + 2);
}
}
}
return (NULL);
}
