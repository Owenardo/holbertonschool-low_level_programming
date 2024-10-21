#include <stdio.h>
#include "main.h"
/**
* main - Princpal
*
* Return: 0
*
*/
int print_alphabet(void)
{
int i = 'A';
while (i <= 'Z')
{
_putchar(i + 32);
i++;
}
_putchar('\n');
return (0);
}
