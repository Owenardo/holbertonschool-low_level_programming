#include "3-calc.h"
#include <stdio.h>
/**
 * get_op_func - function
 * @s: asd
 * Return: pointer
 */
int (*get_op_func(char *s))(int a, int b)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i = 0;
while (i < 5)
{
if (*s == *(ops[i].op))
return (ops[i].f);
i++;
}
return (ops[i].f);
}
