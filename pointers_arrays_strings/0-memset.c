#include <stdio.h>
#include "main.h"
/**
 * _memset - memory with a constant byte
 *@s: pointer
 *@b: constant byte
 *@n: number of bytes
 *Return: a
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	char *a = s;

	while (i < n)
	{
		*s++ = b;
		i++;
	}
	return (a);
}
