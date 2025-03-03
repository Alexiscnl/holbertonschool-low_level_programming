#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print result diagonal
 *@a: painting
 *@size: taille
 *
 * no Return
 */
void print_diagsums(int *a, int size)
{
int diag1 = 0;
int diag2 = 0;
int i;


for (i = 0; i < size; i++)
{
diag1 = diag1 + *(a + i * size + i);
}
for (i = 0; i < size; i++)
{
diag2 = diag2 + *(a + i * size + (size - i - 1));
}
printf("%d, %d\n", diag1, diag2);
}
