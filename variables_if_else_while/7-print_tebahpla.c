#include <stdio.h>
/**
* main - reverse
* Return: 0
*
*/
int main(void)
{
int i = 'Z';

while (i >= 'A')
{
putchar(i + 32);
i--;
}
putchar('\n');

return (0);
}