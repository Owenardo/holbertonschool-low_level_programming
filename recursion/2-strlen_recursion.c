#include <stdio.h>
#include "main.h"
/**
* _strlen - fuction
* @s: pointer
* Return:length
*
*/
int _strlen_recursion(char *s)
{
int length = 0;
while (*s != '\0')
{
length++;
s++;
}
return (length);
}
