#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - asd
 *@size: size of array
 *@c: value
 *Return: array
 */
char *create_array(unsigned int size, char c)
{
char *arr = malloc(size * sizeof(char));
unsigned int i = 0;

if (size == 0)
return (NULL);

if (arr == NULL)
return (NULL);
while (i < size)
{
arr [i] = c;
i++;
}
return (arr);
}
