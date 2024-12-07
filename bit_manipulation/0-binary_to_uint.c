#include <stdio.h>
#include "main.h"
/**
* binary_to_uint - fuciton converts binary number to unsigned
 *@b: string
 *Return: result
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int result = 0;
int i = 0;
if (b == NULL)
{
return (0);
}
for (; b[i] != '\0'; i++)
{
if (b[i] != '0' && b[i] != '1')
{
return (0);
}
result = result * 2 + (b[i] - '0');
}

return (result);
}
