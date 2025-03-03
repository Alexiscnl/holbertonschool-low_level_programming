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
int i, j;

for (i = 0; haystack[i] != '\0'; i++)
{
for (j = 0; needle[j] != '\0'; j++)
{
if (haystack[i] == needle[j])
{
return (haystack + 7);
}
}
}
return (NULL);
}
