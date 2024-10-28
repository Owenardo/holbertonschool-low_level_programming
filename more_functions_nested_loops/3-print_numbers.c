#include <stdio.h>
#include "main.h"
/**
*print_numbers - fuction
*Return: void
*
*/
void print_numbers(void)
{
int i = 0;
while (i < 10)
{
_putchar(i + 48);
i++;
}
putchar('\n');
}
