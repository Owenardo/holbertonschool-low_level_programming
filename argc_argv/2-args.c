#include <stdio.h>
/**
 * main - fuction
 *@argc: contain number of arguments
 *@argv: asd
 *Return:0
 *
 */
int main(int argc, char *argv[])
{
int i = 0;

while (i < argc)
{
printf("%s\n", argv[i]);
i++;
}
return (0);
}
