#include "main.h"
/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to be checked.
 * @accept: The set of characters to check in s.
 *
 * Return: counter
 */
unsigned int _strspn(char *s, char *accept)
{
int i, j;
unsigned int counter = 0;

for (i = 0; s[i] != '\0'; i++)
{
int found = 0;
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
found = 1;
break;
}
}
if (found)
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
