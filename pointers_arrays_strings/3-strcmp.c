#include <stdio.h>
#include "main.h"
/**
 *_strcmp - copy two strings
 *@s1: asd
 *@s2: asd
 *Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 - *s2 != 0)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (0);
}
