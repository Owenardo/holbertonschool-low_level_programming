#include <stdio.h>
#include "main.h"
/**
*swap_int - fuction
*@a: pointer 1
*@b: pointer 2
*Return: 0
*/
void swap_int(int *a, int *b)
{
int c = *a;
*a = *b;
*b = c;
}
