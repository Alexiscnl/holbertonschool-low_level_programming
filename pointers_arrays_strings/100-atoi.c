#include "main.h"
/**
 *
 *
 *
 */
int _atoi(char *s)
{
	int number;
	int sign = 1;

	for (number = 0; s[number] != '\0'; number++)
	{
		if (s[number] == '-')
		{
			sign = -sign;
		}
		if (s[number] >= '0' && s[number] <= '9')
		{		
		}
	}

	return number;
}
