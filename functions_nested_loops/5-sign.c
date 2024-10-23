#include <stdio.h>
#include "main.h"
/**
*print_sign - return a sign
* @n: number
* Return: -1 0 1
*
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
int zero = 0;

_putchar(zero + 48);
return (0);
}

_putchar('-');
return (-1);
}
