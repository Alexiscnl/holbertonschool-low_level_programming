#include "main.h"
/**
 * rev_string - reverse string my school
 *@s: pointer the string
 *
 * no Return
 */
void rev_string(char *s)
{
	int index = 0;
	int index2 = 0;
	int temp = 0;

	while (s[index] != '\0')
	{
		index++;
	}

	while (index2 < index)
	{
		index--;
		temp = s[index];
		s[index] = s[index2];
		s[index2] = temp;
		index2++;
	}
}
