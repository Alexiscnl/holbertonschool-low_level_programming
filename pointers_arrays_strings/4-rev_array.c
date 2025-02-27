#include "main.h"
/**
 * reverse_array - reverse a
 *@a: sentence
 *@n: painting
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int temp = 0;
	int start = 0;
	int finish = n - 1;

	while (start < finish)
	{
		temp = a[start];
		a[start] = a[finish];
		a[finish] = temp;
		start++;
		finish--;
	}
}
