#include <stdio.h>
/**
* main - while
* Return: 0
*
*/
int main(void)
{
int i = 'A';

while (i <= 'Z')
{
if (i == 'Q' || i == 'E')
{
i++;
continue;
}
else
{
putchar(i + 32);
}
i++;
}
putchar('\n');

return (0);
}
