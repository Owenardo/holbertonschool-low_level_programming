#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - Print a name from a function pointer
 * @name: char string
 * @f: string argument
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
