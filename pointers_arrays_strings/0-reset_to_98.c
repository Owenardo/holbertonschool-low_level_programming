#include <stdio.h>
#include "main.h"


void reset_to_98(int *n)
{
int num = 98;
int *p = &num;
*n = *p;
}
