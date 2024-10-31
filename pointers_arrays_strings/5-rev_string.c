#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* rev_string - print a string reverse
* Return: Always 0
* @s: value
*
*/
void rev_string(char *s)
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
