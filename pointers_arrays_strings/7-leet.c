#include "main.h"
/**
 * *leet - converts a string
 *@i: sentence
 *
 * Return: copy
 */
char *leet(char *i)
{
	int j, a;
	char let[] = "aAeEoOtTlL";
	char remp[] = "4433007711";

	for (j = 0; i[j]; j++)
	{
		for (a = 0; let[a]; a++)
		{
			if (i[j] == let[a])
			{
				i[j] = remp[a];
				break;
			}
		}
	}
	return i;
}
