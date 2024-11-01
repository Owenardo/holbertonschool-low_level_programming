#include <stdio.h>
#include "main.h"
/**
 * _strcat - fuction
 *@dest: pointer
 *@src: pointer
 *Return: dest
 */
char *_strcat(char *dest, char *src)
{
char *a;
char *b;

a = dest;
while (*a != '\0')
{
a++;
}
b = src;
while (*b != '\0')
{
*a = *b;
a++;
b++;
}
*a = '\0';
return (dest);
}
