#include "main.h"
/**
 * print_chessboard - Affiche un échiquier 8x8
 *@a: painting
 *
 * no Return
 */
void print_chessboard(char (*a)[8])
{
int i, j;

for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
{
_putchar(a[i][j]);
}
_putchar('\n');
}
}
