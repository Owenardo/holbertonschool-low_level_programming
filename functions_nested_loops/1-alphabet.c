#include <stdio.h>
#include "main.h"
/**
* print_alphabet - imprimir a-z
* Return: 0
*
*/
void print_alphabet(void)
{
int i = 'A';
while (i <= 'Z')
{
_putchar(i + 32);
i++;
}
_putchar('\n');
}
