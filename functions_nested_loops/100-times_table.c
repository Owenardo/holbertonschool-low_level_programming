#include "main.h"
#include <stdio.h>
/**
* print_number - function
* @n: parameter
* Return: number
*/
void print_number(int n)
{
if (n < 0)
{
n = -n;
_putchar('-');
}
if (n >= 10)
{
print_number(n / 10);
}
_putchar('0' + (n % 10));
}
/**
* times_table - multiplies 9 table
* Return: table of 9
*
*/
void print_times_table(int n)
{
int product;
int i = 0, j;
if (n < 0 || n == 15)
{
return;
} 
while (i <= n)
{
j = 0;
while (j <= n)
{
product = i * j;
if (product < 10)
{
if (j > 0)
{
_putchar(',');
_putchar(' ');
}
print_number(product);
}
if (product < 10)
{
_putchar(' ');
_putchar(' ');
}
print_number(product);
j++;
}
_putchar('\n');
i++;
}
}
