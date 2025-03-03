#include "main.h"
#include <stddef.h>
/**
 * _strchr - Find the first occurrence of a character in a string
 *@s: The string to search
 *@c: The character to find
 *
 *Return: NULL
 */
char *_strchr(char *s, char c)
{

for (; *s != '\0'; s++)
{
if (*s == c)
{
return (s);
}
}
if (c == '\0')
{
return (s);
}
return (NULL);
}
