#include "main.h"
#include <stdio.h>
/**
* puts_half - prints the half of the string
*@str: value
*
*Return:0
*/

void puts_half(char *str)
{
	int middle = (*str) / 2;

	if (middle % 2 == 0)
	{
		str = str + middle + 1;
	}
	else if  (middle % 2 != 0)
	{
		str = str + middle;
	}
	while (*str != '\0')
	{
		if (*str != '\0')
		{
			_putchar (*str);
		}
			str++;
	}
	_putchar ('\n');
}
