#include "main.h"
0;10;1c#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 *
 *
 *
 *
 */

void *malloc_checked(unsigned int b)
{
int *p;

p = malloc(b);
if (p == NULL)
exit(98);
return (p);
}
