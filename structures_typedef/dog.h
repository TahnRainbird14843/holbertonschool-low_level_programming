#ifndef MAIN_H
#define MAIN_H

/**
 * struct dog - dog info
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

int init_dog(struct dog *d, char *name, float age, char *owner);
int print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
int free_dog(dog_t *d);

#endif
