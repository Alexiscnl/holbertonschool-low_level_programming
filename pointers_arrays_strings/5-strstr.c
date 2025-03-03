#include "main.h"
#include <stddef.h>
/**
 * _strstr - Finds the first occurrence of the substring needle in the
 * string haystack
 * @haystack: The main string where the search is done
 * @needle: The substring to search for
 *
 * Return: NULL
 */
char *_strstr(char *haystack, char *needle)
{
if (*needle == '\0')
{
return (haystack);
}
for (; *haystack != '\0'; haystack++)
{
char *n = needle;
char *h = haystack;
while (*h != '\0' && *n != '\0' && *h == *n)
{
h++;
n++;
}
if (*n == '\0')
{
return (haystack);
}
}
return (NULL);
}
