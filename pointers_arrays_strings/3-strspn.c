#include <stdio.h>
#include "main.h"
/**
 * _strspn - finds length of a prefix substring
 * @s: string
 * @accept: chars
 * Return: n bytes in intial segment of s which
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int a = 0;
	int b;

	while (*s)
	{
		i = 0;
		b = a;
		while (*(accept + i) != '\0')
		{
			if (*(accept + i) == *s)
				a++;
			i++;
		}
		if (b == a)
			break;
		s++;
	}
	return (a);
}
