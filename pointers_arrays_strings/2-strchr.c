#include <stdio.h>
#include "main.h"
/**
 * _strchr - fuction
 *@s: pointer
 *@c:  characters
 *Return: null
 *
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i))
	{
		if (*(s + i) == c)
			return (s + i);
		i++;
	}
	if (*(s + i) == c)
		return (s + i);
	return (NULL);
}
