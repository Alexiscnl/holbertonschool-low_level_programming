#include "main.h"
/**
 * *string_toupper - change lowercase and uppercase
 *@i: sentence
 *
 * Return: copy
 */
char *string_toupper(char *i)
{
	char *copy = i;
	int repeat;

	for (repeat = 0; repeat < 2; repeat++)
	{
		i = copy;

		for (; *i != '\0'; i++)
		{
			if (*i >= 'a' && *i <= 'z')
			{
				*i = *i - 32;
			}
		}
	}
	return (copy);
}
