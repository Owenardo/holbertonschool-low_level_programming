#include <stdio.h>
/**
* main - Princpal
*
* Return: 0
*
*/
int main(void)
{
int i = 'A';
while (i <= 'Z')
{
putchar(i + 32);
i++;
}
putchar('\n');
return (0);
}
