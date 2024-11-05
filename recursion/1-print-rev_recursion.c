#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* _print_rev_recursion - print a string reverse
* Return: Always 0
* @s: value
*
*/
void _print_rev_recursion(char *s)
{
	int j = 0;
	int i = 0;
	char sTemp;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;

	while (j < i)
	{
		sTemp = s[j];
		s[j] = s[i];
		s[i] = sTemp;
		j++;
		i--;
	}
}
