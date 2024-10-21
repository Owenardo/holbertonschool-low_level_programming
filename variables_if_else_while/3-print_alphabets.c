#include <stdio.h>
/**
 * main - aA-Zz
 * Return: 0
 */

int main(void)
{
int i = 'A';
int x = 'A';
while (i <= 'Z')
{
putchar(i + 32);
i++;
}
while (x <= 'Z')
{
putchar(x);
x++;
}
putchar('\n');
return (0);
}
