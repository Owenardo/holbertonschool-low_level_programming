#include <stdio.h>
#include "main.h"
/**
* reset_to_98 - fuction
*@n: number
*Return: 0
*/

void reset_to_98(int *n)
{
int num = 98;
int *p = &num;
*n = *p;
}
