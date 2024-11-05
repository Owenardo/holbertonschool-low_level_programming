#include <stdio.h>
#include "main.h"
/**
 *
 *
 *
 *
 */
int factorial(int n)
{
  int resultado = 1;
  if (n < 0)
    return -1;
  while (n > 0)
    {
      resultado *= n;
      n--;
    }
  return (resultado);
}
