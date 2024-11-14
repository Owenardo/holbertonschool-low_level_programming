#include "dog.h"
#include <stdio.h>
/**
 *init_dog - fuction
 *@d: pointer
 *@name: name dog
 *@age: age dog
 *@owner: owner of dog
 *Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
