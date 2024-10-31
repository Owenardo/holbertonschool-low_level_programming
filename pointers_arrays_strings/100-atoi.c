#include <limits.h>
#include <stdio.h>
#include "main.h"
/**
 * _atoi - fuction
 * @s: string
 * Return: syr
 *
 */
int _atoi(char *s)
{
int sign = 1;
unsigned int result = 0;
int found_digit = 0;

while (*s)
{
if (*s == ' ')
{
s++;
continue;
}
if (*s == '-')
{
sign = -sign;
s++;
}
else if (*s == '+')
{
s++;
}
while (*s >= '0' && *s <= '9')
{
found_digit = 1;
if (result > (UINT_MAX - (*s - '0')) / 10)
{
return ((sign == 1) ? INT_MAX : INT_MIN);
}
result = result * 10 + (*s - '0');
s++;
}
if (found_digit)
{
break;
}
s++;
}
return (sign *result);
}
