#include <stdio.h>
#include "main.h"
/**
*print_last_digit - fuction
* @n: is a number
* Return: 0
*/

int print_last_digit(int n)
{
int last_digit;

if (n < 0)
{
n = -n;
}
last_digit = n % 10;
_putchar('0' + last_digit);
return (0 + last_digit);
}
