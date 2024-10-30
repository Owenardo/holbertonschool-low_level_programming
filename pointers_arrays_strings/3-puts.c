#include <stdio.h>
#include "main.h"
/**
*_puts - fuction
*@str: letters on  pointer
*Return: 0
*
*/
void _puts(char *str)
{
while (*str)
{
_putchar(*str);
str++;
}
_putchar('\n');
}
