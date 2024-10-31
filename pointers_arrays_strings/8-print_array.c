#include <stdio.h>
#include "main.h"
/**
 * print_array - element of an array
 * @a: pointer
 * @n: numbers
 *Return: 0
 *
 */
void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
printf("%d", a[i]);
	if (i < n - 1)
	{
	putchar(',');
	putchar(' ');
	}
}
putchar('/n');
}
