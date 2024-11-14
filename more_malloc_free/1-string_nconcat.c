#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 *string_nconcat - fuction concatenates two strings
 *@s1: string 1
 *@s2: string 2
 *@n: number of bytes
 *Return: result
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *result;
unsigned int len1 = strlen(s1);
unsigned int len2 = strlen(s2);

if (s1 == NULL)
return (" ");
if (s2 == NULL)
return (" ");

if (n >= len2)
n = len2;

result = malloc(len1 + n + 1);
if (result == NULL)
return (NULL);

strcpy(result, s1);
strncat(result, s2, n);

return (result);
}
