#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog struct
 * @name: dog name
 * @owner: dog owner
 * @age: dog age
 *
 * Description: just a lonely dog struct
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
