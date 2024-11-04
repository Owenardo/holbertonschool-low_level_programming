#include <stdio.h>
#include "main.h"
/**
 * _memcpy - copies memory area
 *@dest: pinter
 *@src: pointer copy
 *@n: num of byte
 *Return: s
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	char *s = dest;

	while (i < n)
	{
		*dest++ = *src++;
		i++;
	}
	return (s);
}
