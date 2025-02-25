#include "main.h"
/**
 * _strlen - computer the number caracter
 *@s: pointer of the string
 *
 * Return: longueur (number caracter)
 */
int _strlen(char *s)
{
	int longueur = 0;

	for (; s[longueur] != '\0'; )
	{
		longueur++;
	}
	return (longueur);
}
