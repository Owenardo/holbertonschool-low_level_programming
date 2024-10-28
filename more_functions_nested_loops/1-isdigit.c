#include <stdio.h>
#include "main.h"
/**
* _isdigit - fuction
* @c: is a digit
* Return: 1 for digit or 0 otherwise
*/

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
