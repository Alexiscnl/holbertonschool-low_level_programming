#include "main.h"
#include <stddef.h>
/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to be checked.
 * @accept: The set of characters to check in s.
 *
 * Return: counter
 */
unsigned int _strspn(char *s, char *accept)
{
int i;
int counter = 0;

for (i = 0; s[i] != '\0'; i++)
{
if (_strchr(accept, s[i]))
{
counter++;
}
else
{
break;
}
}
return (counter);
}
