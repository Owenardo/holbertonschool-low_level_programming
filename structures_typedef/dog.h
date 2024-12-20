#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure
 * @owner: name of the owner
 * @name: name of the dog
 * @age: age of dog
 *
 * Description: Structure to create a dog
 */
typedef struct dog
{
	char *owner;
char *name;
	float age;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
