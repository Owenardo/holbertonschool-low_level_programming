#include <stdio.h>
#include "main.h"
/**
 * string_toupper - lowercase to uppercase
 * @x: string
 *Return: 0
 */
char *string_toupper(char *x)
{
	int a;

	a = 0;

	while (x[a] != '\0')
	{
		if (x[a] >= 97 && x[a] <= 122)
		{
			x[a] = x[a] - 32;
		}
		a++;
	}
	return (x);
}
