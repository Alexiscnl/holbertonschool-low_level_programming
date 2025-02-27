#include "main.h"
/**
 * *leet - converts a string
 *@i: sentence
 *
 * Return: copy
 */
char *leet(char *i)
{
	char *copy = i;
	char let[] = "aAeEoOtTlL";
	char remp[] = "4433007711";
	int a;

	for (; *i != '\0'; i++)
	{
		for (a = 0; let[a] != '\0'; a++)
		{
			if (*i == let[a])
			{
				*i = remp[a];
				break;
			}
		}
		i++;
	}
	return (copy);
}
