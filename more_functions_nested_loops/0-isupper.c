#include <stdio.h>
#include "main.h"
/**
* _isupper - function check uppercase
* @c: char
* Return: 1 for uppercase or 0 for minuscule
*/

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
