#include <stdlib.h>
#include <stdio.h>
/**
 *main - argv 1 * 2
 *@argc: asd
 *@argv: dasd
 *Return: 1 error or 0 total
 */
int main(int argc, char *argv[])
{
int total;

if (argc != 3)
{
printf("error\n");
return (1);
}
total = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", total);
return (0);
}
