#include "main.h"
/**
 * *cap_string - print sentence first letter uppercase
 *@i: sentence
 *
 * Return: copy
 */
char *cap_string(char *i)
{
	char *copy = i;
	int sep = 1;

	for (; *i != '\0'; i++)
	{

		if (*i == ' ' || *i == '\t' || *i == '\n' ||
		*i == ';' || *i == '.' || *i == '!' ||
		*i == '!' || *i == '?' || *i == '"' ||
		*i == '(' || *i == ')' || *i == '{' ||
		*i == '}')
		{
			sep = 1;
		}
		else if (*i >= 'a' && *i <= 'z' && sep)
		{
			*i -= 32;
			sep = 0;
		}
		else
		{
			sep = 0;
		}
	}
	return (copy);
}
